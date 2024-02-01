
#include "model.h"

namespace s21 {

Operator::Operator()
    : left_assoc_(true),
      func_(nullptr),
      priority_(-1),
      full_name_(""),
      nat_name_(""),
      oper_type_(OperType::kLeftBracket){};

Operator::Operator(std::string full_name, std::string nat_name, int count,
                   bool left_assoc, Func func, int priority)
    : left_assoc_(left_assoc), func_(func), priority_(priority) {
  if (full_name.empty() || nat_name.empty()) {
    throw std::invalid_argument(
        "Wrong naming operand! String must not be empty!");
  }
  if (priority < 0) {
    throw std::invalid_argument(
        "Priority must be grater or equal zero (Priority >= 0)!");
  }
  if (count < 0 || count >= 3) {
    throw std::invalid_argument(
        "Count of needed operands must be grater (or equal) then 0 and "
        "lesser than 3");
  }

  if (full_name[0] == '(') {
    oper_type_ = OperType::kLeftBracket;
  } else if (full_name[0] == ')') {
    oper_type_ = OperType::kRightBracket;
  } else if (count == 1) {
    oper_type_ = OperType::kUnary;
  } else if (count == 2) {
    oper_type_ = OperType::kBinary;
  }

  full_name_ = full_name;
  nat_name_ = nat_name;
};

Operator::Operator(std::string full_name, int count, bool left_assoc, Func func,
                   int priority)
    : Operator(full_name, "0", count, left_assoc, func, priority) {
  size_t len = full_name.length();
  if (len == 1) nat_name_ = full_name[0];
  if (len >= 2) nat_name_ = full_name.substr(0, 2);
};

double Operator::Calc(double a, double b) const {
  double arr[2] = {a, b};
  return func_(arr);
};

double Operator::Calc(double a) const {
  double arr[1] = {a};
  return func_(arr);
}

bool Operator::IsOperation() const {
  return (oper_type_ == OperType::kUnary || oper_type_ == OperType::kBinary);
}
}  // namespace s21