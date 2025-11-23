#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::on_btnStart_clicked() {
    ui->stack_widget->setCurrentIndex(1);
}