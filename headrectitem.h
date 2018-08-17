#ifndef HEADRECTITEM_H
#define HEADRECTITEM_H

#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QPainter>
#include <QRect>
#include <QRectF>
#include <QtGui>
#include <QToolTip>
#include <QGraphicsSceneHoverEvent>
#include <QHashIterator>
#include "tcpsocket.h"


class headRectItem : public QGraphicsRectItem
{
public:
    headRectItem(qreal x, qreal y, qreal width, qreal height,
                 QHashIterator <QString,tcpsocket *> i,
                 QColor color,
                 QGraphicsItem *parent = nullptr);

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    QColor cc;
    QString text;
    qreal xx;
    qreal yy;

};

#endif // HEADRECTITEM_H
