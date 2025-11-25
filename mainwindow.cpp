#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculate.h"
#include <QMainWindow>
#include <iostream>
#include <vector>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->txtAnswer->setDigitCount(6);
}

void MainWindow::on_btnMinus_clicked() {
    //checks if anything has been typed into the calculator by the user yet, if so, this will push the number and the operator into the vertex.
    //logic is the same for all operators 
    if (temp != -1) {
        list.push_back(temp);
        list.push_back(-98);
    }

}

void MainWindow::on_btnDivide_clicked() {
    if (temp != -1) {
        list.push_back(temp);
        list.push_back(-96);
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
void MainWindow::on_btnThree_clicked() {
    ui->txtAnswer->display(3);
    temp = 3;
}

void MainWindow::on_btnFour_clicked() {
    ui->txtAnswer->display(4);
    temp = 4;
}

void MainWindow::on_btnFive_clicked() {
    ui->txtAnswer->display(5);
    temp = 5;
}

void MainWindow::on_btnSix_clicked() {
    ui->txtAnswer->display(6);
    temp = 6;
}

void MainWindow::on_btnSeven_clicked() {
    ui->txtAnswer->display(7);
    temp = 7;
}

void MainWindow::on_btnEight_clicked() {
    ui->txtAnswer->display(8);
    temp = 8;
}

void MainWindow::on_btnNine_clicked() {
    ui->txtAnswer->display(9);
    temp = 9;
}

void MainWindow::on_btnZero_clicked() {
    ui->txtAnswer->display(0);
    temp = 0;
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
        total = calc.calculate(list);
        ui->txtAnswer->display(total);
        list.clear();
    } else {
        ui->txtAnswer->display(0);
    }
}

void MainWindow::on_btnClear_clicked() {
    ui->txtAnswer->display(0);
    total = 0;
    list.clear();
    current = -1, total = 0, temp = -1;
    first = -1, second = -1;
}

