#ifndef CPP3_SMARTCALC_V2_SRC_MODEL_MODEL_H_
#define CPP3_SMARTCALC_V2_SRC_MODEL_MODEL_H_
#include <list>
#include <stack>
#include <string>
#include <vector>

#include "lexeme.h"
#include "operator.h"

namespace s21 {

class Model {
  using oper_container = std::vector<Operator>;
  using lexeme_container = std::vector<Lexeme>;
  using postfix_container = std::list<Lexeme>;

 public:
  Model();
  ~Model();

  void Set(std::string str, double x);
  double Count(double x = 0);

 private:
  void Calculator();
  void PolishFormat(lexeme_container& lexems);

  std::string RemoveUnnecessary();
  void StrToLexeme(lexeme_container& infix);

  void Validator(lexeme_container& infix);

  void AddNumber(lexeme_container& infix);
  void AddOperator(lexeme_container& infix, bool& may_unary);
  bool FindFullName(std::string& needle, std::vector<const Operator*>& storage);
  void ReplaceOne(const Operator* o, bool& may_unary);

  const Operator* ReplaceUnaryClones(bool& may_unary,
                                     std::vector<const Operator*>& storage);

  bool UnaryOrBinanryTwo(const Operator* curr, const Operator* next);

  const Operator* BinaryFromTwo(const Operator* curr, const Operator* next);
  const Operator* UnaryFromTwo(const Operator* curr, const Operator* next);
  void CheckOpers(const Operator* curr, const Operator* prev, size_t i,
                  bool operand);
  void CheckBrackets(std::stack<char>& brackers, const Operator* curr);

  postfix_container InfixToPostfix(lexeme_container& infix);
  void OperatorToPostfix(std::stack<const Operator*>& s, postfix_container& p,
                         const Operator* curr);

  bool BinaryInStart(const Operator* curr, size_t i);
  bool BinaryInRow(const Operator* curr, const Operator* prev, bool operand);
  bool UnaryInRow(const Operator* curr, const Operator* prev, bool operand);
  bool BothLeftAssoc(const Operator* curr, const Operator* prev);
  bool IsLeftWithPriority(const Operator* top, const Operator* curr);
  bool IsOperand(char c);
  double PolishCalc(double x);

 private:
  std::string str_;
  double x_;
  oper_container opers_;
  postfix_container postfix_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_MODEL_MODEL_H_
