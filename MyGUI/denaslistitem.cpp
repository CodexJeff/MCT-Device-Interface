#include "denaslistitem.h"

DenasListItem::DenasListItem(){
    associatedList = NULL;
}

void DenasListItem::setAssocList(QListWidget *l) {associatedList = l;}
QListWidget* DenasListItem::getAssocList() {return associatedList;}
