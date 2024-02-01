#include "controller.h"

#include <QString>

#include "../Model/error.h"

namespace s21 {
QString Controller::Calculate(QString x, QString str) {
  QString result = "";

  try {
    SetExpression(str, x);
    result = QString::number(model_->Count(x.toDouble()));
  } catch (Error& err) {
    result = QString::fromUtf8(std::string(err.what()).c_str());
  }

  return result;
}

bool Controller::CountAnnuity(double sum, size_t term, double interest,
                              bool year) {
  bool res = debt_->SetCredit(sum, term, interest, CreditType::kAnnuity, year);
  debt_->CountAnnuity();
  return res;
}

bool Controller::CountDiffer(double sum, size_t term, double interest,
                             bool year) {
  bool res = debt_->SetCredit(sum, term, interest, CreditType::kDiffer, year);
  debt_->CountDiffer();
  return res;
}

QString Controller::GetOverpayment() {
  return QString::number(debt_->GetOverpayment(), 'g', 7);
};

QString Controller::GetMonthlyPayment() {
  return QString::fromStdString(debt_->GetMonthlyPaymentString());
};

void Controller::SetExpression(QString str, QString x) {
  if (str.isEmpty()) {
    throw Error("Empty string");
  }
  if (str.length() > 256) {
    throw Error("String too long");
  }
  bool ok = true;
  if (!ok) {
    throw Error("Not Valid");
  }
  double std_x = x.toDouble(&ok);
  std::string std_str = str.toStdString();

  model_->Set(std_str, std_x);
}

}  // namespace s21
