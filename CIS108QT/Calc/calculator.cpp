#include "calculator.h"
#include "ui_calculator.h"

double calcVal = 0.0;
double memVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent) :


    QMainWindow(parent),


    ui(new Ui::Calculator)
{


    ui->setupUi(this);


    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];

    for(int i = 0; i < 10; ++i){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
    }

    // Connects ui to functions
    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Equal, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));
    connect(ui->ChangeSign, SIGNAL(released()), this,
            SLOT(ChangeNumberSign()));
    connect(ui->Point, SIGNAL(released()), this,
            SLOT(PointPressed()));
    connect(ui->Tangent, SIGNAL(released()), this,
            SLOT(TanPressed()));
    connect(ui->Sine, SIGNAL(released()), this,
            SLOT(SinPressed()));
    connect(ui->Cosine, SIGNAL(released()), this,
            SLOT(CosPressed()));
    connect(ui->Logarithm, SIGNAL(released()), this,
            SLOT(LogPressed()));
    connect(ui->SquareRoot, SIGNAL(released()), this,
            SLOT(SqrtPressed()));
    connect(ui->Clear, SIGNAL(released()), this,
            SLOT(ClearPressed()));
    connect(ui->Mem, SIGNAL(released()), this,
            SLOT(MemPressed()));
    connect(ui->MemAdd, SIGNAL(released()), this,
            SLOT(MemAddPressed()));
    connect(ui->MemClear, SIGNAL(released()), this,
            SLOT(MemClearPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0)){


        ui->Display->setText(butVal);
    } else {

        QString newVal = displayVal + butVal;//truncates as string


        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));//changes val to double, also handles . operator

    }
}


void Calculator::MathButtonPressed(){


    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();


    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();

    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else {
        subTrigger = true;
    }

    ui->Display->setText("");//grabs second number

}

void Calculator::EqualButtonPressed(){


    double solution = 0.0;


    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();


    if(addTrigger || subTrigger || multTrigger || divTrigger ){ //case handling for basic functions
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        } else {
            solution = calcVal / dblDisplayVal;
        }
    }


    ui->Display->setText(QString::number(solution));

}

void Calculator::ChangeNumberSign(){


    QString displayVal = ui->Display->text();


    QRegExp reg("[-+]?[0-9.]*"); //checks for regular expression
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}
void Calculator::PointPressed(){

    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0)){
        ui->Display->setText("0.");
    }
    else {

        QString newVal = displayVal + ".";
        ui->Display->setText(newVal); //setting this to double instead of text negates the period when it breaks from function

    }
}

// All of these functions are Copy/Paste but could be combined to one if it parses text before 'pressed'.
void Calculator::LogPressed(){

    QString displayVal = ui->Display->text();
    QRegExp reg("[-+]?[0-9.]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValLog = log(dblDisplayVal);
        ui->Display->setText(QString::number(dblDisplayValLog));
    }
}

void Calculator::SinPressed(){

    QString displayVal = ui->Display->text();
    QRegExp reg("[-+]?[0-9.]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSin = sin(dblDisplayVal);
        ui->Display->setText(QString::number(dblDisplayValSin));
    }
}
void Calculator::CosPressed(){

    QString displayVal = ui->Display->text();
    QRegExp reg("[-+]?[0-9.]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValCos = cos(dblDisplayVal);
        ui->Display->setText(QString::number(dblDisplayValCos));
    }
}
void Calculator::TanPressed(){

    QString displayVal = ui->Display->text();
    QRegExp reg("[-+]?[0-9.]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValTan = tan(dblDisplayVal);
        ui->Display->setText(QString::number(dblDisplayValTan));
    }
}
void Calculator::SqrtPressed(){

    QString displayVal = ui->Display->text();
    QRegExp reg("[-+]?[0-9.]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSqrt = sqrt(dblDisplayVal);
        ui->Display->setText(QString::number(dblDisplayValSqrt));
    }
}
//exchanging vals from display to memory
void Calculator::ClearPressed(){

    ui->Display->setText("0");
    memVal = 0;
}
void Calculator::MemPressed(){
    QString displayVal = ui->Display->text();
    memVal = displayVal.toDouble();
     ui->Display->setText("");

}
void Calculator::MemClearPressed(){

    ui->Display->setText("");
    memVal = 0;
}
void Calculator::MemAddPressed(){

    ui->Display->setText(QString::number(memVal));

}
