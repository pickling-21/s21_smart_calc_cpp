#include "model.h"

#include <cmath>
#include <iostream>

#include "error.h"
#include "lexeme.h"

namespace s21 {

Model::Model()
    : str_(""), x_(0), opers_(oper_container()), postfix_(postfix_container()) {
  Calculator();
};
Model::~Model() {
  str_ = "";
  x_ = 0;
  opers_.clear();
};

void Model::Set(std::string str, double x) {
  postfix_ = postfix_container();
  str_ = str;
  x_ = x;
}

double Model::Count(double x) {
  lexeme_container lexems;
  double result = 0;
  if (postfix_.empty()) {
    PolishFormat(lexems);
    postfix_ = InfixToPostfix(lexems);
  }
  result = PolishCalc(x);
  return result;
}

void Model::Calculator() {
  Operator nothing(
      "+", "#", 1, false, [](double* s) { return s[0]; }, 6);
  Operator negate(
      "-", "~", 1, false, [](double* s) { return -s[0]; }, 6);

  Operator left("(", 0, true, nullptr, 0);
  Operator right(")", 0, true, nullptr, 0);

  Operator sum(
      std::string("+"), 2, true, [](double* s) { return s[0] + s[1]; }, 1);
  Operator sub(
      std::string("-"), 2, true, [](double* s) { return s[0] - s[1]; }, 1);

  Operator mul(
      "*", 2, true, [](double* s) { return s[0] * s[1]; }, 2);
  Operator div(
      std::string("/"), 2, true, [](double* s) { return s[0] / s[1]; }, 2);
  Operator mod(
      std::string("mod"), "m", 2, true,
      [](double* s) { return fmod(s[0], s[1]); }, 2);

  Operator power(
      "^", 2, false, [](double* s) { return pow(s[0], s[1]); }, 7);

  Operator sin(
      "sin", "s", 1, true, [](double* s) { return std::sin(s[0]); }, 4);

  Operator cos(
      "cos", "c", 1, true, [](double* s) { return std::cos(s[0]); }, 4);
  Operator tan(
      "tan", "t", 1, true, [](double* s) { return std::tan(s[0]); }, 4);
  Operator acos(
      "acos", "ac", 1, true, [](double* s) { return std::acos(s[0]); }, 4);
  Operator asin(
      "asin", "as", 1, true, [](double* s) { return std::asin(s[0]); }, 4);
  Operator atan(
      "atan", "at", 1, true, [](double* s) { return std::atan(s[0]); }, 4);

  Operator sqrt(
      "sqrt", "qs", 1, true, [](double* s) { return std::sqrt(s[0]); }, 4);
  Operator ln(
      "ln", "nl", 1, true, [](double* s) { return log(s[0]); }, 4);
  Operator log(
      "log", "ng", 1, true, [](double* s) { return log10(s[0]); }, 4);

  Operator aboba(
      "ab", "a", 1, true, [](double* s) { return -s[0]; }, 4);

  opers_.push_back(left);
  opers_.push_back(right);

  opers_.push_back(negate);
  opers_.push_back(nothing);

  opers_.push_back(sub);
  opers_.push_back(sum);

  opers_.push_back(mul);
  opers_.push_back(div);
  opers_.push_back(mod);

  opers_.push_back(power);
  opers_.push_back(sin);
  opers_.push_back(cos);
  opers_.push_back(tan);
  opers_.push_back(acos);
  opers_.push_back(asin);
  opers_.push_back(atan);

  opers_.push_back(sqrt);
  opers_.push_back(ln);
  opers_.push_back(log);
  opers_.push_back(aboba);
}

void Model::PolishFormat(lexeme_container& infix) {
  str_ = RemoveUnnecessary();

  StrToLexeme(infix);

  Validator(infix);
};

std::string Model::RemoveUnnecessary() {
  std::string result;
  for (char ch : str_) {
    if (std::isspace(ch)) {
      continue;
    } else if (ch == ',') {
      result.push_back('.');
    } else {
      result.push_back(ch);
    }
  }
  return result;
}

bool Model::IsOperand(char c) {
  return (c >= '0' && c <= '9') || c == 'x' || c == ',';
}

void Model::StrToLexeme(lexeme_container& infix) {
  bool may_unary = true;

  while (!str_.empty()) {
    char ch = str_[0];
    if (IsOperand(ch)) {
      AddNumber(infix);
      may_unary = false;
    } else {
      AddOperator(infix, may_unary);
    }
  }
}

void Model::AddNumber(lexeme_container& infix) {
  if (str_[0] == 'x') {
    infix.push_back(Lexeme(LexemeType::kX, x_));
    str_ = str_.substr(1);
  } else {
    size_t endPos;
    double number = std::stod(str_, &endPos);
    if (endPos != 0) {
      infix.push_back(Lexeme(LexemeType::kNumber, number));
      str_ = str_.substr(endPos);
    } else {
      throw Error("Invalid number");
    }
  }
}

void Model::AddOperator(lexeme_container& infix, bool& may_unary) {
  std::vector<const Operator*> storage;

  if (FindFullName(str_, storage)) {
    const Operator* curr = storage[0];
    if (storage.size() == 1) {
      ReplaceOne(curr, may_unary);
    } else {
      curr = ReplaceUnaryClones(may_unary, storage);
    }
    infix.push_back(Lexeme(LexemeType::kOperator, 0, curr));
    str_ = str_.substr(curr->GetFullName().length());
  } else {
    throw Error("Invalid operation (Add Operator)");
  }
}

bool Model::FindFullName(std::string& needle,
                         std::vector<const Operator*>& storage) {
  size_t count = 0;
  for (auto it = opers_.begin(); it != opers_.end(); ++it) {
    std::string full_name((*it).GetFullName());

    if (needle.compare(0, full_name.length(), full_name) == 0) {
      storage.push_back(&(*it));
      count++;
    }
  }

  return count == 0 ? false : true;
}

void Model::ReplaceOne(const Operator* o, bool& may_unary) {
  if (o->IsCloseBracket())
    may_unary = false;
  else
    may_unary = true;
}

const Operator* Model::ReplaceUnaryClones(
    bool& may_unary, std::vector<const Operator*>& storage) {
  const Operator* finded = nullptr;
  for (size_t j = 0; j < storage.size() - 1; j++) {
    if (UnaryOrBinanryTwo(storage[j], storage[j + 1])) {
      finded = UnaryFromTwo(storage[j], storage[j + 1]);
      if (!may_unary) {
        finded = BinaryFromTwo(storage[j], storage[j + 1]);
      }
    }
  }
  may_unary = true;
  return finded;
}

bool Model::UnaryOrBinanryTwo(const Operator* curr, const Operator* next) {
  return (curr->IsUnary() && next->IsBinary()) ||
         (curr->IsBinary() && next->IsUnary());
}

const Operator* Model::UnaryFromTwo(const Operator* curr,
                                    const Operator* next) {
  return curr->IsUnary() ? curr : next;
}

const Operator* Model::BinaryFromTwo(const Operator* curr,
                                     const Operator* next) {
  return curr->IsBinary() ? curr : next;
}

void Model::Validator(lexeme_container& infix) {
  std::stack<char> brackers;
  bool operand = false;
  const Operator* curr = nullptr;
  const Operator* prev = nullptr;
  for (size_t i = 0; i < infix.size(); ++i) {
    if (infix[i].IsNumber()) {
      operand = true;
      continue;
    } else if (infix[i].IsOperator()) {
      curr = infix[i].GetOperPtr();
      CheckOpers(curr, prev, i, operand);
      CheckBrackets(brackers, curr);
      operand = false;
    }
    prev = curr;
    if (operand) operand = false;
  }
  if (!brackers.empty()) throw Error("Brackets");
}

void Model::CheckOpers(const Operator* curr, const Operator* prev, size_t i,
                       bool operand) {
  bool res = true;
  if (curr) {
    if (BinaryInStart(curr, i)) {
      res = false;
      // если бинарный в начале строки
    } else if (operand && curr->IsOpenBracket()) {
      res = false;
      // если после операнда(числа) сразу скобка
    } else if (prev) {
      if (BinaryInRow(curr, prev, operand)) {
        res = false;
        // если два бинарных подряд
      } else if (UnaryInRow(curr, prev, operand) && BothLeftAssoc(curr, prev)) {
        res = false;
        // унарные и левоассоциированные подряд
      } else if (!operand && prev->IsOperation() && curr->IsCloseBracket()) {
        res = false;
        // если после операции закрытая скобка
      }
    }
  }
  if (res == false) throw Error("Error");
}

void Model::CheckBrackets(std::stack<char>& brackers, const Operator* curr) {
  if (curr->IsOpenBracket()) {
    brackers.push('(');
  } else if (curr->IsCloseBracket()) {
    if (brackers.empty()) {
      throw Error("Brackets!");
    } else {
      brackers.pop();
    }
  }
}

bool Model::BinaryInStart(const Operator* curr, size_t i) {
  return curr->IsBinary() && i == 0;
}

bool Model::BinaryInRow(const Operator* curr, const Operator* prev,
                        bool operand) {
  return !operand && curr->IsBinary() && prev->IsBinary();
}

bool Model::UnaryInRow(const Operator* curr, const Operator* prev,
                       bool operand) {
  return !operand && curr->IsUnary() && prev->IsUnary();
}

bool Model::BothLeftAssoc(const Operator* curr, const Operator* prev) {
  return curr->IsLeftAssoc() && prev->IsLeftAssoc();
}

Model::postfix_container Model::InfixToPostfix(lexeme_container& infix) {
  postfix_container postfix;
  std::stack<const Operator*> oper_stack;
  for (auto it = infix.begin(); it != infix.end(); ++it) {
    if ((*it).IsNumber()) {
      postfix.push_back(*it);
    } else {
      const Operator* curr = (*it).GetOperPtr();
      // if (curr != nullptr)
      OperatorToPostfix(oper_stack, postfix, curr);
    }
  }
  while (!oper_stack.empty()) {
    const Operator* o = oper_stack.top();
    postfix.push_back(Lexeme(LexemeType::kOperator, 0, o));
    oper_stack.pop();
  }
  if (postfix.empty()) throw Error("Empty expression");
  return postfix;
}

void Model::OperatorToPostfix(std::stack<const Operator*>& s,
                              postfix_container& p, const Operator* curr) {
  if (s.empty() || curr->IsOpenBracket()) {
    // если стек пустой или скобка открытая
    s.push(curr);
  } else if (curr->IsOperation()) {
    // если операция (не скобки)
    while (!s.empty() && IsLeftWithPriority(s.top(), curr)) {
      const Operator* o = s.top();
      p.push_back(Lexeme(LexemeType::kOperator, 0, o));
      s.pop();
    }
    s.push(curr);
  } else if (curr->IsCloseBracket()) {
    while (!s.top()->IsOpenBracket()) {
      const Operator* o = s.top();
      p.push_back(Lexeme(LexemeType::kOperator, 0, o));
      s.pop();
    }
    s.pop();
  }
}

bool Model::IsLeftWithPriority(const Operator* top, const Operator* curr) {
  // поменять название?
  return (curr->IsLeftAssoc() && top->GetPriority() >= curr->GetPriority()) ||
         (!curr->IsLeftAssoc() && top->GetPriority() > curr->GetPriority());
}

double Model::PolishCalc(double x) {
  std::stack<double> nums;
  double res = 0.0;
  for (auto it = postfix_.begin(); it != postfix_.end(); ++it) {
    if ((*it).IsNumber()) {
      if ((*it).IsX()) {
        nums.push(x);
      } else {
        nums.push((*it).GetNum());
      }
    } else if ((*it).GetOperPtr()->IsOperation()) {
      const Operator* oper = (*it).GetOperPtr();
      if (oper->IsUnary() && nums.size() >= 1) {
        double a = nums.top();
        nums.pop();
        nums.push(oper->Calc(a));
      } else if (oper->IsBinary() && nums.size() >= 2) {
        double b = nums.top();
        nums.pop();
        double a = nums.top();
        nums.pop();
        nums.push(oper->Calc(a, b));
      } else {
        throw Error("Not enought operstors!");
      }
    }
  }
  if (!nums.empty()) {
    res = nums.top();
    nums.pop();
  } else {
    throw Error("Not enought operstors!");
  }
  return res;
};
}  // namespace s21
