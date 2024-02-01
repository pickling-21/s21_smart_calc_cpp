#include <QApplication>

#include "Controller/controller.h"
#include "Model/credit.h"
#include "Model/model.h"
#include "View/view.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  s21::Model m;
  s21::Credit credit;

  s21::Controller c(&m, &credit);
  View w(nullptr, &c);

  w.show();
  return a.exec();
}
