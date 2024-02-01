#include "lexeme.h"

namespace s21 {
Lexeme::Lexeme(LexemeType type, double num, const Operator* oper) {
  if (type == LexemeType::kNumber) {
    num_ = num;
  } else if (type == LexemeType::kOperator && oper != nullptr) {
    oper_ = oper;
    num_ = 0;
  }
  type_ = type;
}
void Lexeme::SetOper(const Operator* oper) {
  if (oper != nullptr) {
    oper_ = oper;
  }
}
bool Lexeme::IsNumber() {
  return type_ == LexemeType::kNumber || type_ == LexemeType::kX;
}
}  // namespace s21