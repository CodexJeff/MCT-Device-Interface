#ifndef DENASLISTITEM_H
#define DENASLISTITEM_H

#include <QWidget>
#include <QListWidget>
#include <QListWidgetItem>
#include <string>

using namespace std;

class DenasListItem : public QListWidgetItem
{
    //Q_OBJECT
public:
    DenasListItem();
    void setAssocList(QListWidget*);
    QListWidget* getAssocList();
    string getFlag();
    void setFlag(string);

private:
    QListWidget *associatedList;
<<<<<<< HEAD
     QScreen *associatedDisplay;
     string modeFlag;
=======
   //  QScreen *associatedDisplay;
>>>>>>> bd0630d8cd7493f369405838f614a3d269fe1913

signals:

};

#endif // DENASLISTITEM_H
