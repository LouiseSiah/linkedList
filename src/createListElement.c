#include "linkedList.h"
#include "createLinkedList.h"
#include "createListElement.h"
#include <stdio.h>
#include <malloc.h>

/**
* To create a new list element to store a value given.
*
* The structure of a list element:
*	struct listElement *next :  Pointer used to link with 
*                             another list element.
*	int value                :   Value to be stored.
* 	
*
* Input:
*	value:  A value given to be stored in the list element.
* Return:
*	element:  A list element that had stored the input value,
*	          and the 'next' pointer had assigned to NULL.
*/

struct listElement *createListElement(int value)
{
  struct listElement *element = malloc(sizeof(struct listElement));
  
  if (element == NULL)
  {
    printf("Error: storage fulled!");
    exit(1);
  }
  
  element->value = value;
  element->next = NULL;
  return element;
}