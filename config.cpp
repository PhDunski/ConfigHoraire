#include "config.h"
#include "planning.h"
#include <fstream>
#include <QPushButton>
#include <QHBoxLayout>
Config::Config(int configNumber) : filename("config")
{
    filename.append(std::to_string(configNumber))
            .append(".csv");
    am = new Planning(AM);
    pm = new Planning(PM);
    saveButton = new QPushButton(tr("Enregistrer"));
    QHBoxLayout * layout = new QHBoxLayout;
    layout->addWidget(am);
    layout->addWidget(pm);
    layout->addWidget(saveButton);
    setLayout(layout);
    connect(saveButton, &QPushButton::clicked, this, &Config::save);

}
void Config::save(){
    std::ofstream ofs(filename);
    am->save(ofs);
    pm->save(ofs);
}
