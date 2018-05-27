#ifndef PLANNING_H
#define PLANNING_H

#include <QWidget>
#include <QList>
class TimeSlot;
enum DayPart{
    AM = 0,
    PM = 12
};
class Planning : public QWidget
{
    Q_OBJECT
  public:
    Planning(DayPart part);
      /* parce que l'on veut pouvoir sauvegarder le planning entier */
      void save(std::ofstream& ofs);
  private:
      /* parce que pour sauvegarder le planning, il faut pouvoir accéder à
       * toutes les plages horraires
       */
      QList<TimeSlot * > allSlots;
};

#endif // PLANNING_H
