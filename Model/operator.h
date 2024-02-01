#ifndef CPP3_SMARTCALC_V2_SRC_MODEL_OPERATOR_H_
#define CPP3_SMARTCALC_V2_SRC_MODEL_OPERATOR_H_

#include <functional>
#include <iostream>
#include <string>

//? Type of operand.
namespace s21 {
class Operator {
  enum class OperType {
    kUnary,
    kBinary,
    kLeftBracket,   // priority 0
    kRightBracket,  // priority 0
  };

 private:
  using Func = std::function<double(double *)>;

 public:
  Operator();

  Operator(std::string full_name) : Operator() { full_name_ = full_name; }

  /// @brief Create operation
  /// @param full_name full name
  /// @param nat_name notation name
  /// @param count count of arguments (0 brackets, 1 unary, 2 binary)
  /// @param left_assoc is left associative
  /// @param func poiner to function
  /// @param priority priority
  Operator(std::string full_name, std::string nat_name, int count,
           bool left_assoc, Func func, int priority);

  /// @brief Create operation
  /// @param full_name full name
  /// @param count count of arguments (0 brackets, 1 unary, 2 binary)
  /// @param left_assoc is left associative
  /// @param func poiner to function
  /// @param priority priority
  Operator(std::string full_name, int count, bool left_assoc, Func func,
           int priority);

  void Printing() { std::cout << full_name_ << " " << nat_name_ << " "; };

  double Calc(double a, double b) const;

  double Calc(double a) const;

  std::string GetFullName() const { return full_name_; }
  std::string GetNatName() const { return nat_name_; }
  OperType GetOperType() const { return oper_type_; }
  int GetPriority() const { return priority_; }

  bool IsOpenBracket() const { return oper_type_ == OperType::kLeftBracket; }
  bool IsCloseBracket() const { return oper_type_ == OperType::kRightBracket; }
  bool IsUnary() const { return oper_type_ == OperType::kUnary; }
  bool IsBinary() const { return oper_type_ == OperType::kBinary; }
  bool IsLeftAssoc() const { return left_assoc_ == true; }
  bool IsOperation() const;

 private:
  bool left_assoc_;
  Func func_;
  int priority_;
  std::string full_name_;
  std::string nat_name_;
  OperType oper_type_;
};
}  // namespace s21
#endif  // CPP3_SMARTCALC_V2_SRC_MODEL_OPERATOR_H_
