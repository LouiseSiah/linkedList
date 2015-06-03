#ifndef createLinkedList_H
#define createLinkedList_H
#include "createListElement.h"

struct linkedList
{
  struct listElement *head;
  struct listElement *tail;
};

struct linkedList *createLinkedList();

#endif // createLinkedList_H