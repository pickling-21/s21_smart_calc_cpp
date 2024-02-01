#ifndef View_H
#define View_H
#include <QMainWindow>

#include "../Controller/controller.h"
#include "graph.h"

// #include "../Project/s21_credit_calc.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class View;
}
QT_END_NAMESPACE

class View : public QMainWindow {
  Q_OBJECT

 public:
  View(QWidget *parent = nullptr, s21::Controller *controller = nullptr);
  ~View();

 private:
  Ui::View *ui;
  Graph *plot;
  s21::Controller *controller_;

 signals:
  void signal(s21::Controller *);

 private slots:
  void ButtonsClicked();
  void Result();
  void DeliteOne();
  void Clear();
  void GraphPrint();
  void Credit();
};
#endif  // View_H
