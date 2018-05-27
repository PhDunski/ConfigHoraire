#include "mainwindow.h"
#include "planning.h"
#include <QPushButton>
#include <QTabWidget>
#include "config.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QTabWidget * widget = new QTabWidget;
    widget->addTab(new Config(1),tr("Configuration 1"));
    widget->addTab(new Config(2),tr("Configuration 2"));
    widget->addTab(new Config(3),tr("Configuration 3"));
    widget->addTab(new Config(4),tr("Configuration 4"));
    setCentralWidget(widget);
}
