#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculate.h"
#include <QMainWindow>
#include <iostream>
#include <vector>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::on_btnMinus_clicked() {
    if (temp != -1) {
        list.push_back(temp);
        list.push_back(-98);
    }

}

void MainWindow::on_btnTimes_clicked() {
    if (temp != -1) {
        list.push_back(temp);
        list.push_back(-97);
    }
}
void MainWindow::on_btnOne_clicked() {
    ui->txtAnswer->display(1);
    temp = 1;
}

void MainWindow::on_btnTwo_clicked() {
    ui->txtAnswer->display(2);
    temp = 2;
}

void MainWindow::on_btnPlus_clicked() {
    if (temp != -1) {
        list.push_back(temp);
        list.push_back(-99);
    }
}

void MainWindow::on_btnEqual_clicked() {
    if (temp != -1) {
        list.push_back(temp);
    }
    total = calc.calculate(list);
    ui->txtAnswer->display(total);
    list.clear();
}

void MainWindow::on_btnClear_clicked() {
    ui->txtAnswer->display(0);
    total = 0;
    list.clear();
    current = -1, total = 0, temp = -1;
    first = -1, second = -1;
    plus = 0;

}

