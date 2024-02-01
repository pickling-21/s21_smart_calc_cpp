#ifndef CPP3_SMARTCALC_V2_SRC_CONTROLLER_CONTROLLER_H_
#define CPP3_SMARTCALC_V2_SRC_CONTROLLER_CONTROLLER_H_

#include <QString>

#include "../Model/credit.h"
#include "../Model/model.h"

namespace s21 {

class Controller {
 public:
  Controller(Model* model, Credit* credit) : model_(model), debt_(credit){};

  ~Controller() = default;

  QString Calculate(QString x, QString str);

  double Calculate(double x) { return model_->Count(x); }

  bool CountAnnuity(double sum, size_t term, double interest, bool year);

  bool CountDiffer(double sum, size_t term, double interest, bool year);

  QString GetOverpayment();

  QString GetPsk() { return QString::number(debt_->GetPsk(), 'g', 7); };

  QString GetMonthlyPayment();

 private:
  void SetExpression(QString str, QString x);

 private:
  Model* model_;
  Credit* debt_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_CONTROLLER_CONTROLLER_H_
