#include "graph.h"

#include "Controller/controller.h"
#include "ui_graph.h"

Graph::Graph(QWidget* parent) : QWidget(parent), ui(new Ui::Graph) {
  ui->setupUi(this);
  this->setFixedSize(637, 500);
  connect(ui->pushButton_draw, SIGNAL(clicked()), this, SLOT(GraphChange()));
}

void Graph::GraphChange() { Slot(c_); }

void Graph::Slot(s21::Controller* c) {
  c_ = c;
  h_ = 0.01;
  x_max_ = ui->lineEdit_xmax->text().toDouble();
  x_min_ = ui->lineEdit_xmin->text().toDouble();
  y_max_ = ui->lineEdit_ymax->text().toDouble();
  y_min_ = ui->lineEdit_ymin->text().toDouble();

  ui->widget->clearGraphs();
  ui->widget->xAxis->setRange(x_min_, x_max_);
  ui->widget->yAxis->setRange(y_min_, y_max_);

  for (double X = x_min_; X <= x_max_; X += h_) {
    double Y = 0.0;

    Y = c_->Calculate(X);

    if (Y <= y_min_ * 2 || Y >= y_max_ * 2 || std::isnan(Y)) {
      Y = qQNaN();
    }

    x_.push_back(X);
    y_.push_back(Y);
  }

  ui->widget->addGraph();
  ui->widget->graph(0)->addData(x_, y_);
  ui->widget->replot();
  x_.clear();
  y_.clear();
  x_.squeeze();
  y_.squeeze();
}

Graph::~Graph() { delete ui; }
