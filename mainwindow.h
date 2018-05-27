#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class Planning;
class QPushButton;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);


private:
    QPushButton * exit;
};

#endif // MAINWINDOW_H
