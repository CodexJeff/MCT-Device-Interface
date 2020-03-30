#ifndef DENASLISTITEM_H
#define DENASLISTITEM_H

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>

class DenasListItem : public QListWidgetItem
{
    //Q_OBJECT
public:
    DenasListItem();
    void setAssocList(QListWidget*);
    QListWidget* getAssocList();

private:
    QListWidget *associatedList;
    // QDisplay *associatedDisplay; <- might use later on

signals:

};

#endif // DENASLISTITEM_H
