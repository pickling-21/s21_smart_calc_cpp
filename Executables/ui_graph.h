/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "View/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QLineEdit *lineEdit_ymin;
    QLineEdit *lineEdit_ymax;
    QPushButton *pushButton_draw;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_xmax;
    QLabel *label_graph;
    QLineEdit *lineEdit_xmin;
    QLabel *label_3;
    QCustomPlot *widget;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(641, 496);
        lineEdit_ymin = new QLineEdit(Graph);
        lineEdit_ymin->setObjectName(QString::fromUtf8("lineEdit_ymin"));
        lineEdit_ymin->setGeometry(QRect(324, 20, 61, 31));
        lineEdit_ymax = new QLineEdit(Graph);
        lineEdit_ymax->setObjectName(QString::fromUtf8("lineEdit_ymax"));
        lineEdit_ymax->setGeometry(QRect(444, 20, 61, 31));
        pushButton_draw = new QPushButton(Graph);
        pushButton_draw->setObjectName(QString::fromUtf8("pushButton_draw"));
        pushButton_draw->setGeometry(QRect(523, 20, 81, 31));
        pushButton_draw->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        label_4 = new QLabel(Graph);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(394, 30, 36, 12));
        label_2 = new QLabel(Graph);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(154, 30, 36, 12));
        label = new QLabel(Graph);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(34, 30, 36, 12));
        lineEdit_xmax = new QLineEdit(Graph);
        lineEdit_xmax->setObjectName(QString::fromUtf8("lineEdit_xmax"));
        lineEdit_xmax->setGeometry(QRect(204, 20, 61, 31));
        label_graph = new QLabel(Graph);
        label_graph->setObjectName(QString::fromUtf8("label_graph"));
        label_graph->setGeometry(QRect(34, 460, 571, 21));
        label_graph->setAlignment(Qt::AlignCenter);
        lineEdit_xmin = new QLineEdit(Graph);
        lineEdit_xmin->setObjectName(QString::fromUtf8("lineEdit_xmin"));
        lineEdit_xmin->setGeometry(QRect(84, 20, 61, 31));
        label_3 = new QLabel(Graph);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(274, 30, 36, 12));
        widget = new QCustomPlot(Graph);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(34, 70, 571, 381));

        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Form", nullptr));
        lineEdit_ymin->setText(QCoreApplication::translate("Graph", "-10", nullptr));
        lineEdit_ymax->setText(QCoreApplication::translate("Graph", "10", nullptr));
        pushButton_draw->setText(QCoreApplication::translate("Graph", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("Graph", "Y max", nullptr));
        label_2->setText(QCoreApplication::translate("Graph", "X max", nullptr));
        label->setText(QCoreApplication::translate("Graph", "X min", nullptr));
        lineEdit_xmax->setText(QCoreApplication::translate("Graph", "10", nullptr));
        label_graph->setText(QString());
        lineEdit_xmin->setText(QCoreApplication::translate("Graph", "-10", nullptr));
        label_3->setText(QCoreApplication::translate("Graph", "Y min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
