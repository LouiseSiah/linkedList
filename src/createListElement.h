#ifndef createListElement_H
#define createListElement_H

struct listElement
{
  struct listElement *next ;
  int    value;
};

struct listElement *createListElement(int value);

#endif // createListElement_H