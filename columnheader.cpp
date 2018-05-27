#include "columnheader.h"
#include <QLabel>
#include <QHBoxLayout>
ColumnHeader::ColumnHeader(QWidget *parent) : QWidget(parent)
{
    QLabel * hour = new QLabel(tr("Heure :"));
    QLabel * temperature = new QLabel(tr("Température °"));
    QLabel * humidity = new QLabel(tr("Humidité %"));
    QLabel * luminosity = new QLabel(tr("Luminosité %"));
    QHBoxLayout * layout = new QHBoxLayout;
    layout->addWidget(hour);
    layout->addWidget(temperature);
    layout->addWidget(humidity);
    layout->addWidget(luminosity);
    setLayout(layout);
}
