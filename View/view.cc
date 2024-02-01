#include "view.h"

#include "./ui_view.h"
#include "graph.h"

//#include "../Project/s21_credit_calc.h"
//#include "iostream"

View::View(QWidget *parent, s21::Controller *controller)
    : QMainWindow(parent), ui(new Ui::View), controller_(controller) {
  plot = new Graph;
  connect(this, &View::signal, plot, &Graph::Slot);
  //    plot->show();
  //    plot->hide();

  ui->setupUi(this);
  this->setFixedSize(1060, 442);
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));

  connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));

  connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this,
          SLOT(ButtonsClicked()));

  connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));

  connect(ui->pushButton_pow, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_left, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_right, SIGNAL(clicked()), this,
          SLOT(ButtonsClicked()));

  connect(ui->pushButton_x, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));
  connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(ButtonsClicked()));

  connect(ui->lineEdit_main, SIGNAL(returnPressed()), this, SLOT(Result()));

  connect(ui->pushButton_eq, SIGNAL(clicked()), this, SLOT(Result()));

  connect(ui->pushButton_AC, SIGNAL(clicked()), this, SLOT(Clear()));
  connect(ui->pushButton_C, SIGNAL(clicked()), this, SLOT(DeliteOne()));

  connect(ui->pushButton_graph, SIGNAL(clicked()), this, SLOT(GraphPrint()));

  connect(ui->pushButton_credit, SIGNAL(clicked()), this, SLOT(Credit()));
}

View::~View() { delete ui; }

void View::ButtonsClicked() {
  QPushButton *button = (QPushButton *)sender();
  QString new_label = ui->lineEdit_main->text() + button->text();
  ui->lineEdit_main->setText(new_label);
}

void View::Result() {
  if (ui->lineEdit_x->text().isEmpty()) {
    ui->lineEdit_main->setText("x isn't valid");
  } else {
    QString x = ui->lineEdit_x->text();
    QString result = "";
    QString str = ui->lineEdit_main->text();

    result = controller_->Calculate(x, str);
    ui->lineEdit_main->setText(result);
  }
}

void View::Clear() { ui->lineEdit_main->setText(""); }
void View::DeliteOne() { ui->lineEdit_main->backspace(); }

void View::GraphPrint() {
  plot->show();
  QString str = ui->lineEdit_main->text();
  controller_->Calculate("1", str);
  emit signal(controller_);
}

void View::Credit() {
  bool ok_term = true;
  bool ok_interest = true;
  bool ok_sum = true;

  size_t term = ui->lineEdit_term->text().toUInt(&ok_term);
  double interest = ui->lineEdit_interest->text().toDouble(&ok_interest);
  double sum = ui->lineEdit_sum->text().toDouble(&ok_sum);
  bool year = false;

  if (ui->comboBox_term_type->currentText() == "лет") {
    year = true;
  }

  if (ok_term && ok_interest && ok_sum) {
    if (ui->radioButton_ann->isChecked()) {
      controller_->CountAnnuity(sum, term, interest, year);
    } else if (ui->radioButton_diff->isChecked()) {
      controller_->CountDiffer(sum, term, interest, year);
    }

    QString payments = controller_->GetMonthlyPayment();
    QString overpay = controller_->GetOverpayment();
    QString psk = controller_->GetPsk();

    ui->label_monthly_payment->setText(payments);
    ui->label_overpay->setText(overpay);
    ui->label_psk->setText(psk);
  }
}
