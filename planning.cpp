#include "planning.h"
#include "columnheader.h"
#include "timeslot.h"
#include <QVBoxLayout>
Planning::Planning(DayPart part)
{

    QVBoxLayout * layout = new QVBoxLayout;
    /* d'abord, les en-têtes */
    ColumnHeader * headers = new ColumnHeader;
    layout->addWidget(headers);
    /* ensuite, les 24 plages horaires */
    for(int i = part+ 0; i<part+12; ++i){
        TimeSlot * temp = new TimeSlot(i);
         layout->addWidget(temp);
         allSlots.append(temp);
    }
    setLayout(layout);
}

void Planning::save(std::ofstream & ofs){
    for(auto * it : allSlots)
        it->save(ofs);
}
