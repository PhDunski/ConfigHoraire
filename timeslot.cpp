#include "timeslot.h"

#include <QSpinBox>
#include <QLabel>
#include <QHBoxLayout>
TimeSlot::TimeSlot(int hour, QWidget *parent) : QWidget(parent)
{
    time = new QLabel(QString::number(hour));
    temperature = new QSpinBox;
    humidity = new QSpinBox;
    luminosity = new QSpinBox;
    QHBoxLayout * layout = new QHBoxLayout;
    layout->addWidget(time);
    layout->addWidget(temperature);
    layout->addWidget(humidity);
    layout->addWidget(luminosity);
    setLayout(layout);
}
void TimeSlot::save(std::ofstream & ofs){
    ofs<<time->text().toStdString()<<";"
       <<temperature->text().toStdString()<<";"
       <<humidity->text().toStdString()<<";"
       <<luminosity->text().toStdString()<<";\n";

}
