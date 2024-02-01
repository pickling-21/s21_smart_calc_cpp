#ifndef CPP3_SMARTCALC_V2_SRC_MODEL_CREDIT_H_
#define CPP3_SMARTCALC_V2_SRC_MODEL_CREDIT_H_

#include <cmath>
#include <string>
#include <vector>

namespace s21 {

enum class CreditType { kAnnuity, kDiffer };

enum class TermType { kMonth, kYear };

class Credit {
 public:
  Credit() = default;

  ~Credit() = default;

  bool SetCredit(double sum, size_t term, double interest, CreditType type,
                 bool year);
  void CountAnnuity();
  void CountDiffer();
  void Count();

  double GetOverpayment() { return overpayment_; };
  double GetPsk() { return psk_; };
  std::string GetMonthlyPaymentString();
  std::vector<double> GetMonthlyPayment() { return monthly_payment_; }

 private:
  double sum_;
  size_t term_;
  double interest_;
  CreditType type_;
  std::vector<double> monthly_payment_;
  double overpayment_;
  double psk_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_MODEL_CREDIT_H_
