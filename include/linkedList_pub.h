/*
 * linkedList_pub.h
 *
 *  Created on: Oct 25, 2014
 *      Author: joncronin
 */

#ifndef INCLUDE_LINKEDLIST_PUB_H_
#define INCLUDE_LINKEDLIST_PUB_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "linkedListNode_pub.h"

/* Linked List structures and public APIs */
typedef struct _linkedList
{
      int length;
      int maxSize;
      linkedListNode *headPtr;
      linkedListNode *tailPtr;
} linkedList;

extern int linkedListDoesEntryExist(linkedList *list, linkedListNode *node, linkedListNode *prevNode);
extern int linkedListAddEntryToHead(linkedList *list, linkedListNode *newNode);
extern int linkedListAddEntryToTail(linkedList *list, linkedListNode *newNode);
extern int linkedListRemoveEntry(linkedList *list, linkedListNode *node);
extern int linkedListGetLength(linkedList *list);
extern int linkedListGetMaxSize(linkedList *list);
extern linkedList* linkedListCreateList(int maxSize);
extern int linkedListDeleteList(linkedList *list);

#ifdef __cplusplus
}
#endif
#endif /* INCLUDE_LINKEDLIST_PUB_H_ */
