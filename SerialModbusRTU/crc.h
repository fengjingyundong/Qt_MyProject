#ifndef CRC_H
#define CRC_H

#include <QObject>

class CRC : public QObject
{
    Q_OBJECT

// private:


public:
    explicit CRC(QObject *parent = nullptr);
    ~CRC();

    uint16_t app_Tab_Get_CRC16(QByteArray *puchMsg, unsigned short usDataLen); /* 计算 CRC 冗余效验数据 */
signals:
};

#endif // CRC_H
