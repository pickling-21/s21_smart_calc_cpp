#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>

#include "../Controller/controller.h"

namespace Ui {
class Graph;
}

class Graph : public QWidget {
  Q_OBJECT

 public:
  explicit Graph(QWidget *parent = nullptr);
  ~Graph();

 private:
  Ui::Graph *ui;
  double h_;
  double x_min_, x_max_, y_min_, y_max_;
  QVector<double> x_, y_;
  s21::Controller *c_;
  ;

 public slots:
  void Slot(s21::Controller *c);
  void GraphChange();
};

#endif  // GRAPH_H
