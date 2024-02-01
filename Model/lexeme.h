#ifndef CPP3_SMARTCALC_V2_SRC_MODEL_LEXEME_H_
#define CPP3_SMARTCALC_V2_SRC_MODEL_LEXEME_H_
#include "operator.h"

//? Type of lexeme.
namespace s21 {
enum class LexemeType { kNoType, kNumber, kX, kOperator };

class Lexeme {
 private:
 public:
  Lexeme(LexemeType type, double num = 0, const Operator* oper = nullptr);
  void SetNum(double num) { num_ = num; };
  void SetOper(const Operator* oper);

  LexemeType GetType() const { return type_; }
  double GetNum() const { return type_ == LexemeType::kNumber ? num_ : 3.14; }
  const Operator* GetOperPtr() const { return oper_; }
  bool IsOperator() { return type_ == LexemeType::kOperator; }
  bool IsNumber();
  bool IsX() { return type_ == LexemeType::kX; }

 private:
  LexemeType type_;
  double num_;
  const Operator* oper_;
};
}  // namespace s21
#endif  // CPP3_SMARTCALC_V2_SRC_MODEL_LEXEME_H_