#include "linkedList.h"
#include "createLinkedList.h"
#include "createListElement.h"
#include <stdio.h>
#include <malloc.h>

/**
* To add the new elements created into the link list.
* The head pointer will point to the first element, 
*  and the tail pointer will point to the last element.
* The list will be expanded by adding in new elements.
*		
*/
void addList(struct listElement *newElement,struct linkedList *newList)
{
  if (newList->head == NULL && newList->tail == NULL)
    newList->head = newList->tail = newElement;

  else
  {
    newList->tail->next = newElement;
    newList->tail = newElement;
  }
}