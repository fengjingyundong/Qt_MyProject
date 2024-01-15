#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class TPerson : public QObject
{
    Q_OBJECT

private:
    QString m_name;
    int m_age = 10;
    int m_score = 80;
public:
    explicit TPerson(QString aName, QObject *parent = nullptr);
    ~TPerson();

    int age();
    void setAge(int aAge);
    void incAge();
signals:
    void ageChaged(int age);

};

#endif // TPERSON_H
