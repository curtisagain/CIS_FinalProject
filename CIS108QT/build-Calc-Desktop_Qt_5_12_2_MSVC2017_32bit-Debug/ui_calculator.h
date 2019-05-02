/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QLineEdit *Display;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Divide;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Multiply;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Add;
    QPushButton *Clear;
    QPushButton *Button0;
    QPushButton *Equal;
    QPushButton *Subtract;
    QPushButton *MemAdd;
    QPushButton *MemClear;
    QPushButton *Mem;
    QPushButton *ChangeSign;
    QPushButton *Tangent;
    QPushButton *Sine;
    QPushButton *SquareRoot;
    QPushButton *Cosine;
    QPushButton *Logarithm;
    QPushButton *Point;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(509, 376);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(40, 0, 441, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: gray;\n"
"color: #ffffff;\n"
"border: 1px solid gray;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button7 = new QPushButton(centralWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(40, 70, 80, 31));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setBold(true);
        font1.setWeight(75);
        Button7->setFont(font1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button8 = new QPushButton(centralWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(130, 70, 80, 31));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setFont(font1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button9 = new QPushButton(centralWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(220, 70, 80, 31));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setFont(font1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Divide = new QPushButton(centralWidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(310, 70, 80, 31));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setFont(font1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #58846C;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button4 = new QPushButton(centralWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(40, 110, 80, 31));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setFont(font1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button5 = new QPushButton(centralWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(130, 111, 80, 31));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setFont(font1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button6 = new QPushButton(centralWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(220, 111, 80, 31));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setFont(font1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Multiply = new QPushButton(centralWidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setGeometry(QRect(310, 111, 80, 31));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setFont(font1);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #58846C;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button1 = new QPushButton(centralWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(40, 150, 80, 31));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setFont(font1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button2 = new QPushButton(centralWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(130, 151, 80, 31));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setFont(font1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button3 = new QPushButton(centralWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(220, 151, 80, 31));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setFont(font1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(310, 151, 80, 31));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setFont(font1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #58846C;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(40, 270, 441, 51));
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setFont(font1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #CD5C5C;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Button0 = new QPushButton(centralWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(130, 191, 80, 31));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setFont(font1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Equal = new QPushButton(centralWidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        Equal->setGeometry(QRect(220, 190, 80, 31));
        sizePolicy1.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy1);
        Equal->setFont(font1);
        Equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Subtract = new QPushButton(centralWidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setGeometry(QRect(310, 191, 80, 31));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Subtract->setFont(font1);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #58846C;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Subtract->setAutoDefault(false);
        MemAdd = new QPushButton(centralWidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        MemAdd->setGeometry(QRect(40, 230, 80, 31));
        sizePolicy1.setHeightForWidth(MemAdd->sizePolicy().hasHeightForWidth());
        MemAdd->setSizePolicy(sizePolicy1);
        MemAdd->setFont(font1);
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #066772;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        MemClear = new QPushButton(centralWidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        MemClear->setGeometry(QRect(220, 230, 80, 31));
        sizePolicy1.setHeightForWidth(MemClear->sizePolicy().hasHeightForWidth());
        MemClear->setSizePolicy(sizePolicy1);
        MemClear->setFont(font1);
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #066772;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Mem = new QPushButton(centralWidget);
        Mem->setObjectName(QString::fromUtf8("Mem"));
        Mem->setGeometry(QRect(130, 230, 80, 31));
        sizePolicy1.setHeightForWidth(Mem->sizePolicy().hasHeightForWidth());
        Mem->setSizePolicy(sizePolicy1);
        Mem->setFont(font1);
        Mem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #066772;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        ChangeSign = new QPushButton(centralWidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setGeometry(QRect(310, 230, 80, 31));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setFont(font1);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #58846C;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Tangent = new QPushButton(centralWidget);
        Tangent->setObjectName(QString::fromUtf8("Tangent"));
        Tangent->setGeometry(QRect(400, 230, 80, 31));
        sizePolicy1.setHeightForWidth(Tangent->sizePolicy().hasHeightForWidth());
        Tangent->setSizePolicy(sizePolicy1);
        Tangent->setFont(font1);
        Tangent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #D5A254;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Sine = new QPushButton(centralWidget);
        Sine->setObjectName(QString::fromUtf8("Sine"));
        Sine->setGeometry(QRect(400, 150, 80, 31));
        sizePolicy1.setHeightForWidth(Sine->sizePolicy().hasHeightForWidth());
        Sine->setSizePolicy(sizePolicy1);
        Sine->setFont(font1);
        Sine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #D5A254;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        SquareRoot = new QPushButton(centralWidget);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        SquareRoot->setGeometry(QRect(400, 70, 80, 31));
        sizePolicy1.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy1);
        SquareRoot->setFont(font1);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #D5A254;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Cosine = new QPushButton(centralWidget);
        Cosine->setObjectName(QString::fromUtf8("Cosine"));
        Cosine->setGeometry(QRect(400, 190, 80, 31));
        sizePolicy1.setHeightForWidth(Cosine->sizePolicy().hasHeightForWidth());
        Cosine->setSizePolicy(sizePolicy1);
        Cosine->setFont(font1);
        Cosine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #D5A254;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Logarithm = new QPushButton(centralWidget);
        Logarithm->setObjectName(QString::fromUtf8("Logarithm"));
        Logarithm->setGeometry(QRect(400, 110, 80, 31));
        sizePolicy1.setHeightForWidth(Logarithm->sizePolicy().hasHeightForWidth());
        Logarithm->setSizePolicy(sizePolicy1);
        Logarithm->setFont(font1);
        Logarithm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #D5A254;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Point = new QPushButton(centralWidget);
        Point->setObjectName(QString::fromUtf8("Point"));
        Point->setGeometry(QRect(40, 190, 80, 31));
        sizePolicy1.setHeightForWidth(Point->sizePolicy().hasHeightForWidth());
        Point->setSizePolicy(sizePolicy1);
        Point->setFont(font1);
        Point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #808080;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: #A9A9A9;\n"
"padding: 4p;\n"
"border: 1px solid gray;\n"
"}"));
        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 21));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        Display->setText(QApplication::translate("Calculator", "0.0", nullptr));
        Button7->setText(QApplication::translate("Calculator", "7", nullptr));
        Button8->setText(QApplication::translate("Calculator", "8", nullptr));
        Button9->setText(QApplication::translate("Calculator", "9", nullptr));
        Divide->setText(QApplication::translate("Calculator", "/", nullptr));
        Button4->setText(QApplication::translate("Calculator", "4", nullptr));
        Button5->setText(QApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QApplication::translate("Calculator", "6", nullptr));
        Multiply->setText(QApplication::translate("Calculator", "*", nullptr));
        Button1->setText(QApplication::translate("Calculator", "1", nullptr));
        Button2->setText(QApplication::translate("Calculator", "2", nullptr));
        Button3->setText(QApplication::translate("Calculator", "3", nullptr));
        Add->setText(QApplication::translate("Calculator", "+", nullptr));
        Clear->setText(QApplication::translate("Calculator", "AC", nullptr));
        Button0->setText(QApplication::translate("Calculator", "0", nullptr));
        Equal->setText(QApplication::translate("Calculator", "=", nullptr));
        Subtract->setText(QApplication::translate("Calculator", "-", nullptr));
        MemAdd->setText(QApplication::translate("Calculator", "M+", nullptr));
        MemClear->setText(QApplication::translate("Calculator", "M-", nullptr));
        Mem->setText(QApplication::translate("Calculator", "M", nullptr));
        ChangeSign->setText(QApplication::translate("Calculator", "+/-", nullptr));
        Tangent->setText(QApplication::translate("Calculator", "Tan", nullptr));
        Sine->setText(QApplication::translate("Calculator", "Sin", nullptr));
        SquareRoot->setText(QApplication::translate("Calculator", "\342\210\232", nullptr));
        Cosine->setText(QApplication::translate("Calculator", "Cos", nullptr));
        Logarithm->setText(QApplication::translate("Calculator", "Log", nullptr));
        Point->setText(QApplication::translate("Calculator", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
