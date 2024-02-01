#include "credit.h"

namespace s21 {

bool Credit::SetCredit(double sum, size_t term, double interest,
                       CreditType type, bool year) {
  bool res = true;
  if (sum <= 0 || (interest <= 0 || interest > 999)) {
    res = false;
  } else {
    sum_ = sum;
    term_ = (year == true) ? term * 12 : term;
    interest_ = interest;
    type_ = type;
  }
  overpayment_ = 0;
  psk_ = 0;
  monthly_payment_.clear();
  return res;
};

void Credit::CountAnnuity() {
  double p = interest_ / 100.0 / 12.0;
  double x = std::pow(1.0 + p, term_) - 1.0;
  monthly_payment_.resize(1);
  monthly_payment_[0] = sum_ * (p + p / x);
  overpayment_ = monthly_payment_[0] * term_ - sum_;
  psk_ = sum_ + overpayment_;
};

void Credit::CountDiffer() {
  double p = interest_ / 100.0 / 12.0;
  monthly_payment_.resize(term_);
  double debt_part = sum_ / term_;  // сумма платежа по основному долгу
  double loan_balance = sum_;
  double interest_part = loan_balance * p;  // процентная часть
  for (size_t i = 0; i < term_; i++) {
    interest_part = loan_balance * p;
    monthly_payment_[i] = ceil((debt_part + interest_part) * 100) / 100;
    psk_ += monthly_payment_[i];
    loan_balance -= debt_part;
  }
  overpayment_ = psk_ - sum_;
};

void Credit::Count() {
  double p = interest_ / 100 / 12;
  if (type_ == CreditType::kAnnuity) {
    monthly_payment_.resize(1);
    monthly_payment_[0] =
        floor(sum_ * (p + (p / ((pow(1 + p, term_) - 1)))) * 100) / 100;
    overpayment_ = floor((monthly_payment_[0] * term_ - sum_) * 100) / 100;
    psk_ = floor((sum_ + overpayment_) * 100) / 100;
  } else {
    monthly_payment_.resize(term_);
    double debt_part = sum_ / term_;  // сумма платежа по основному долгу
    double loan_balance = sum_;
    double interest_part = loan_balance * p;  // процентная часть
    for (size_t i = 0; i < term_; i++) {
      interest_part = loan_balance * p;
      monthly_payment_.push_back(floor(debt_part + interest_part));
      psk_ += monthly_payment_[i];
      loan_balance -= debt_part;
    }
    overpayment_ = psk_ - sum_;
  }
};

std::string Credit::GetMonthlyPaymentString() {
  std::string Payments = std::to_string(monthly_payment_[0]) + '\n';
  if (type_ == CreditType::kDiffer) {
    for (size_t i = 1; i < term_; i++) {
      Payments += (std::to_string(monthly_payment_[i]) + '\n');
    }
  }
  return Payments;
};
}  // namespace s21
