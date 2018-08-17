#include "headrectitem.h"

headRectItem::headRectItem(qreal x, qreal y, qreal width, qreal height,
                           QHashIterator <QString, tcpsocket *> i,
                           QColor color,
                           QGraphicsItem *parent )
    : QGraphicsRectItem(x,y,width,height,parent)
{
    setAcceptHoverEvents(true);
    cc=color;
    text=i.key();
    xx=x;
    yy=y;
}

void headRectItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    QString text = "卫星id: " + headRectItem::text + "\n"
            + "当前坐标: (" + QString::number(xx+10) +","+QString::number(yy+10)+")" ;
    QToolTip::showText(event->screenPos(),text);
    setPen(QPen(cc.lighter(130)));
    setBrush(QBrush(cc.lighter(130)));
}

void headRectItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    setPen( QPen(cc) );
    setBrush( QBrush(cc) );
}
