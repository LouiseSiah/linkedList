#include "linkedList.h"
#include "createLinkedList.h"
#include "createListElement.h"
#include <stdio.h>
#include <malloc.h>

/**
* To create a linker to link the elements.
* The structure of a list element:
*	struct listElement *head: To point to the first element.					    
*	struct listElement *tail: To point to the last element.
* 	
* Return:
*	list: A new link list that the head pointer and tail pointer 
*			was pointing to NULL at the first.
*
*/

struct linkedList *createLinkedList()
{
  struct linkedList *list = malloc(sizeof(struct linkedList));
  list->head = NULL;
  list->tail = NULL;
  return list;
}