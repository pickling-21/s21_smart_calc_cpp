/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_main;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_div;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QPushButton *pushButton_C;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_log;
    QPushButton *pushButton_graph;
    QLineEdit *lineEdit_x;
    QPushButton *pushButton_x;
    QPushButton *pushButton_AC;
    QComboBox *comboBox_term_type;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_sum;
    QLineEdit *lineEdit_term;
    QLineEdit *lineEdit_interest;
    QRadioButton *radioButton_ann;
    QRadioButton *radioButton_diff;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_credit;
    QTextEdit *label_monthly_payment;
    QLineEdit *label_overpay;
    QLineEdit *label_psk;
    QLineEdit *label_overpay_2;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(1064, 1064);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(View->sizePolicy().hasHeightForWidth());
        View->setSizePolicy(sizePolicy);
        View->setMinimumSize(QSize(1064, 1064));
        View->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(View);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_main = new QLineEdit(centralwidget);
        lineEdit_main->setObjectName(QString::fromUtf8("lineEdit_main"));
        lineEdit_main->setGeometry(QRect(10, 10, 641, 141));
        lineEdit_main->setLayoutDirection(Qt::RightToLeft);
        lineEdit_main->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 160, 70, 65));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 160, 70, 65));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(170, 160, 70, 65));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(250, 160, 70, 65));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(205, 156, 153);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(133, 107, 106) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 230, 70, 65));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 230, 70, 65));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(250, 230, 70, 65));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(205, 156, 153);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(133, 107, 106) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 230, 70, 65));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 300, 70, 65));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 300, 70, 65));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(250, 300, 70, 65));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(205, 156, 153);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(133, 107, 106) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 300, 70, 65));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(90, 370, 70, 65));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_eq = new QPushButton(centralwidget);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        pushButton_eq->setGeometry(QRect(170, 370, 70, 65));
        pushButton_eq->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_eq->setAutoDefault(true);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(250, 370, 70, 65));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(205, 156, 153);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(133, 107, 106) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(10, 370, 70, 65));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_left = new QPushButton(centralwidget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setGeometry(QRect(420, 160, 70, 65));
        pushButton_left->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_right = new QPushButton(centralwidget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        pushButton_right->setGeometry(QRect(500, 160, 70, 65));
        pushButton_right->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(213, 214, 177);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(580, 160, 70, 65));
        pushButton_C->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(340, 160, 70, 65));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(205, 156, 153);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(133, 107, 106) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(420, 230, 70, 65));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(500, 230, 70, 65));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(580, 230, 70, 65));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(340, 230, 70, 65));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(205, 156, 153);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(133, 107, 106) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(420, 300, 70, 65));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(500, 300, 70, 65));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(580, 300, 70, 65));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(340, 300, 70, 65));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(420, 370, 70, 65));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(340, 370, 70, 65));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(20, 20, 91, 41));
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(540, 24, 101, 31));
        lineEdit_x->setStyleSheet(QString::fromUtf8("LineEdit_x {\n"
"background-color : white;\n"
"border-color: 1px solid white;\n"
"}\n"
"\n"
""));
        lineEdit_x->setAlignment(Qt::AlignCenter);
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(500, 370, 70, 65));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(184, 185, 212);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(98, 99, 135) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(580, 370, 70, 65));
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        comboBox_term_type = new QComboBox(centralwidget);
        comboBox_term_type->addItem(QString());
        comboBox_term_type->addItem(QString());
        comboBox_term_type->setObjectName(QString::fromUtf8("comboBox_term_type"));
        comboBox_term_type->setGeometry(QRect(960, 60, 101, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 10, 101, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(660, 60, 111, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(660, 120, 121, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(660, 160, 121, 51));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(660, 220, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(660, 330, 151, 41));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(660, 280, 141, 51));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(660, 240, 111, 41));
        lineEdit_sum = new QLineEdit(centralwidget);
        lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
        lineEdit_sum->setGeometry(QRect(810, 10, 241, 31));
        lineEdit_term = new QLineEdit(centralwidget);
        lineEdit_term->setObjectName(QString::fromUtf8("lineEdit_term"));
        lineEdit_term->setGeometry(QRect(810, 60, 151, 35));
        lineEdit_interest = new QLineEdit(centralwidget);
        lineEdit_interest->setObjectName(QString::fromUtf8("lineEdit_interest"));
        lineEdit_interest->setGeometry(QRect(810, 110, 241, 35));
        radioButton_ann = new QRadioButton(centralwidget);
        radioButton_ann->setObjectName(QString::fromUtf8("radioButton_ann"));
        radioButton_ann->setGeometry(QRect(810, 160, 121, 31));
        radioButton_diff = new QRadioButton(centralwidget);
        radioButton_diff->setObjectName(QString::fromUtf8("radioButton_diff"));
        radioButton_diff->setGeometry(QRect(810, 190, 171, 31));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(1030, 110, 41, 31));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(1030, 10, 51, 31));
        pushButton_credit = new QPushButton(centralwidget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        pushButton_credit->setGeometry(QRect(670, 390, 111, 41));
        pushButton_credit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color: rgb(159, 186, 211);\n"
"  color: rgb(0, 0, 0);\n"
"  border: 0.5px solid rgb(137, 138, 102) ;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" border: 1px solid black;\n"
"}"));
        label_monthly_payment = new QTextEdit(centralwidget);
        label_monthly_payment->setObjectName(QString::fromUtf8("label_monthly_payment"));
        label_monthly_payment->setGeometry(QRect(810, 340, 241, 91));
        label_overpay = new QLineEdit(centralwidget);
        label_overpay->setObjectName(QString::fromUtf8("label_overpay"));
        label_overpay->setGeometry(QRect(810, 300, 241, 31));
        label_overpay->setDragEnabled(true);
        label_overpay->setReadOnly(true);
        label_overpay->setClearButtonEnabled(false);
        label_psk = new QLineEdit(centralwidget);
        label_psk->setObjectName(QString::fromUtf8("label_psk"));
        label_psk->setGeometry(QRect(810, 250, 241, 31));
        label_psk->setDragEnabled(true);
        label_psk->setReadOnly(true);
        label_psk->setClearButtonEnabled(false);
        label_overpay_2 = new QLineEdit(centralwidget);
        label_overpay_2->setObjectName(QString::fromUtf8("label_overpay_2"));
        label_overpay_2->setGeometry(QRect(510, 24, 31, 31));
        label_overpay_2->setDragEnabled(true);
        label_overpay_2->setReadOnly(true);
        label_overpay_2->setClearButtonEnabled(false);
        View->setCentralWidget(centralwidget);

        retranslateUi(View);

        pushButton_eq->setDefault(false);


        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QCoreApplication::translate("View", "MainWindow", nullptr));
        pushButton_7->setText(QCoreApplication::translate("View", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("View", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("View", "9", nullptr));
        pushButton_div->setText(QCoreApplication::translate("View", "/", nullptr));
        pushButton_5->setText(QCoreApplication::translate("View", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("View", "6", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("View", "*", nullptr));
        pushButton_4->setText(QCoreApplication::translate("View", "4", nullptr));
        pushButton_2->setText(QCoreApplication::translate("View", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("View", "3", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("View", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("View", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("View", "0", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("View", "=", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("View", "+", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("View", ".", nullptr));
        pushButton_left->setText(QCoreApplication::translate("View", "(", nullptr));
        pushButton_right->setText(QCoreApplication::translate("View", ")", nullptr));
        pushButton_C->setText(QCoreApplication::translate("View", "C", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("View", "mod", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("View", "cos", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("View", "sin", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("View", "tan", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("View", "^", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("View", "acos", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("View", "asin", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("View", "atan", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("View", "sqrt", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("View", "ln", nullptr));
        pushButton_log->setText(QCoreApplication::translate("View", "log", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("View", "graph", nullptr));
        lineEdit_x->setText(QCoreApplication::translate("View", "3.1", nullptr));
        pushButton_x->setText(QCoreApplication::translate("View", "x", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("View", "AC", nullptr));
        comboBox_term_type->setItemText(0, QCoreApplication::translate("View", "\320\273\320\265\321\202", nullptr));
        comboBox_term_type->setItemText(1, QCoreApplication::translate("View", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_2->setText(QCoreApplication::translate("View", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("View", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("View", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("View", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \n"
"\320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_6->setText(QCoreApplication::translate("View", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_7->setText(QCoreApplication::translate("View", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_8->setText(QCoreApplication::translate("View", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        radioButton_ann->setText(QCoreApplication::translate("View", "\320\260\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        radioButton_diff->setText(QCoreApplication::translate("View", "\320\264\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label_12->setText(QCoreApplication::translate("View", "%", nullptr));
        label_13->setText(QCoreApplication::translate("View", "\342\202\275", nullptr));
        pushButton_credit->setText(QCoreApplication::translate("View", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_overpay->setText(QString());
        label_psk->setText(QString());
        label_overpay_2->setText(QCoreApplication::translate("View", " x = ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
