#include "tperson.h"
#include <qDebug>

TPerson::TPerson(QString aName, QObject *parent) : QObject{parent}
{
    /* 构造函数 */
    m_name = aName;
    /* 打印构造函数的信息 */
    qDebug()<<aName;
}

TPerson::~TPerson()
{
   /* 析构函数 */
    qDebug()<<"TPerson对象被删除了";
}

int TPerson::age()
{
    /* 返回 年龄 */
    qDebug()<<"返回年龄："<<m_age;
    return m_age;
}

void TPerson::setAge(int aAge)
{
    /* 设置年龄信息 */
    if(aAge != m_age)
    {
        m_age = aAge;
    }
}

void TPerson::incAge()
{
    /* 年龄加一 */
    m_age++;

}
