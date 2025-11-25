#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include "calculate.h"
#include <QMainWindow>
namespace Ui {
    class MainWindow;
};

class MainWindow : public QMainWindow {
    //Qt macro that allows 
    Q_OBJECT

    public:
    explicit MainWindow(QWidget *parent = 0);

    private:
    Calculate calc;
    Ui::MainWindow *ui;
    double current = -1, total = 0, temp;
    double first = -1, second = -1;

    std::vector<double> list;

    private slots:
    void on_btnPlus_clicked();
    void on_btnMinus_clicked();
    void on_btnTimes_clicked();
    void on_btnDivide_clicked();


    void on_btnOne_clicked();
    void on_btnTwo_clicked();
    void on_btnThree_clicked();
    void on_btnFour_clicked();
    void on_btnFive_clicked();
    void on_btnSix_clicked();
    void on_btnSeven_clicked();
    void on_btnEight_clicked();
    void on_btnNine_clicked();
    void on_btnZero_clicked();

    void on_btnEqual_clicked();
    void on_btnClear_clicked();
};
#endif