#include "unity.h"
#include "linkedList.h"
#include <stdio.h>
#include <malloc.h>
#include "createLinkedList.h"
#include "createListElement.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_createLinkedList_should_return_0() //Head and tail should point to NULL at the first,
{                                            // when there has no any list element to point to.	
  struct linkedList *list;
  list = createLinkedList();
  TEST_ASSERT_EQUAL(0,list->head);
  TEST_ASSERT_EQUAL(0,list->tail);
  TEST_ASSERT_NOT_NULL(list);
}

void test_createListElement_put_1_in_elemnt_should_return_the_value_1()
{                                   //To make sure the list element
  struct listElement *element;      // had function well.
  element = createListElement(1);
  TEST_ASSERT_EQUAL(1,element->value);
}

void test_addList_add_one_element_head_and_tail_should_point_to_the_only_element()
{
  struct linkedList *list;
  struct listElement *element;
  int value1 = 1;
	
  list = createLinkedList();
  element = createListElement(value1);
  addList(element, list);
  TEST_ASSERT_EQUAL(value1,list->head->value);
  TEST_ASSERT_EQUAL(value1,list->tail->value);
  TEST_ASSERT_EQUAL(0,list->tail->next);
}

void test_addList_add_one_alpha_head_and_tail_should_give_the_code_of_alpha()
{
  struct linkedList *list;
  struct listElement *element;
    
  list = createLinkedList();
  element = createListElement('a');
  addList(element, list);
  TEST_ASSERT_EQUAL('a',list->head->value);
  TEST_ASSERT_EQUAL('a',list->tail->value);
  TEST_ASSERT_EQUAL(0,list->tail->next);
}

void test_addList_add_two_element_head_and_tail_should_point_to_the_different_elements()
{
  struct linkedList *list;
  struct listElement *element;
  int value1 = 1,
      value2 = 2;
    
  list = createLinkedList();
  element = createListElement(value1);
  addList(element, list);
  element = createListElement(value2);
  addList(element, list);
  TEST_ASSERT_EQUAL(value1,list->head->value);
  TEST_ASSERT_EQUAL(value2,list->head->next->value);
  TEST_ASSERT_EQUAL(value2,list->tail->value);
  TEST_ASSERT_EQUAL(0,list->tail->next);
	
}

void test_addList_add_three_element_head_and_tail_should_point_to_the_different_elements()
{
  struct linkedList *list;
  struct listElement *element;
  int value1 = 1,
      value2 = 2,
      value3 = 3;
    
  list = createLinkedList();
  element = createListElement(value1);
  addList(element, list);
  element = createListElement(value2);
  addList(element, list);
  element = createListElement(value3);
  addList(element, list);
  TEST_ASSERT_EQUAL(value1,list->head->value);
  TEST_ASSERT_EQUAL(value2,list->head->next->value);
  TEST_ASSERT_EQUAL(value3,list->tail->value);
  TEST_ASSERT_EQUAL(0,list->tail->next);
}

void test_addList_add_99_element_head_and_tail_should_point_to_the_different_elements()
{
  struct linkedList *list;
  struct listElement *element;
	
  int firstValue = 1, 
      maxValue   = 100,
      lastValue  = maxValue - 1,
      value;
		
  list = createLinkedList();	
	
  for(value = firstValue; value < maxValue; value++)
  {	
    element = createListElement(value);
    addList(element, list);
  }
		
  for(value = firstValue; value < maxValue; value++)
  {	
    TEST_ASSERT_EQUAL(value,list->head->value);
    if(list->head->next != 0)
      list->head = list->head->next;
		
  }

  TEST_ASSERT_EQUAL(lastValue,list->tail->value);
  TEST_ASSERT_EQUAL(0,list->tail->next);
	
}
