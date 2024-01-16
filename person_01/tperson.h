#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class TPerson : public QObject
{
    Q_OBJECT

    Q_CLASSINFO("author", "Wang") // 定义附加的类信息
    Q_CLASSINFO("company", "UPC")
    Q_CLASSINFO("version", "2.0.0")

    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged) // 定义属性age
    Q_PROPERTY(QString name MEMBER m_name)                      // 定义属性name
    Q_PROPERTY(int score MEMBER m_score)                        // 定义属性score

private:
    QString m_name;
    int m_age = 0;
    int m_score = 0;

public:
    explicit TPerson(QString aName, QObject *parent = nullptr);
    ~TPerson();

    int age();
    void setAge(int aAge);
    void incAge();

signals:
    void ageChanged(int age);

private slots:
};

#endif // TPERSON_H
