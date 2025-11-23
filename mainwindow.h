#ifndef MAINWINDOW_H
#define MAINWINDOW_H
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
    Ui::MainWindow *ui;

    private slots:
    void on_btnStart_clicked();

};
#endif