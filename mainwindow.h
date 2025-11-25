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
    bool plus = 0;

    std::vector<double> list;

    private slots:
    void on_btnPlus_clicked();
    void on_btnMinus_clicked();
    void on_btnTimes_clicked();
    void on_btnDivide_clicked();


    void on_btnOne_clicked();
    void on_btnTwo_clicked();

    void on_btnEqual_clicked();
    void on_btnClear_clicked();




};
#endif