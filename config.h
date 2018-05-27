#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <string>
class Planning;
class QPushButton;
class Config : public QWidget
{
    Q_OBJECT
public:
    explicit Config(int configNumber);

signals:

public slots:
    void save();
private:
    std::string filename;
    Planning * am;
    Planning * pm;
    QPushButton * saveButton;
};

#endif // CONFIG_H
