#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
    void PointPressed();
    void LogPressed();
    void SinPressed();
    void CosPressed();
    void TanPressed();
    void SqrtPressed();
    void ClearPressed();
    void MemPressed();
    void MemAddPressed();
    void MemClearPressed();
};

#endif // CALCULATOR_H
