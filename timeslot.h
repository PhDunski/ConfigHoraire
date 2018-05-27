#ifndef TIMESLOT_H
#define TIMESLOT_H

#include <QWidget>
#include <fstream>
class  QSpinBox;
class QLabel;
class TimeSlot : public QWidget
{
    Q_OBJECT
public:
    explicit TimeSlot(int hour, QWidget *parent = nullptr);
    void save(std::ofstream& ofs);
    private:
        QLabel * time;
        QSpinBox * temperature;
        QSpinBox * humidity;
        QSpinBox * luminosity;
};

#endif // TIMESLOT_H
