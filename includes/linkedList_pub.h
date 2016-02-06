/*
 * linkedList_pub.h
 *
 *  Created on: Oct 25, 2014
 *      Author: joncronin
 */

#ifndef INCLUDES_LINKEDLIST_PUB_H_
#define INCLUDES_LINKEDLIST_PUB_H_

/* List Node structures and public APIs */
typedef struct _linkedListNode
{
      int data;
      struct _linkedListNode *nextNode;
} linkedListNode;

extern int linkedListNodeEquals(linkedListNode *srcNode, linkedListNode *dstNode);

/* Linked List structures and public APIs */
typedef struct _linkedList
{
      int length;
      int maxSize;
      linkedListNode *headPtr;
      linkedListNode *tailPtr;
} linkedList;

extern int linkedListEquals(linkedList *srcList, linkedList *dstList);
extern int linkedListAddVal(linkedList *list, int val);
extern int linkedListAddEntryToHead(linkedList *list, linkedListNode *newNode);
extern int linkedListAddEntryToTail(linkedList *list, linkedListNode *newNode);
extern int linkedListAddEntryInOrder(linkedList *list,linkedListNode *newNode);
extern int linkedListRemoveEntry(linkedList *list, linkedListNode *node);
extern int linkedListGetLength(linkedList *list);
extern int linkedListGetMaxSize(linkedList *list);
extern linkedList* linkedListCreateList(int maxSize);
extern int linkedListDeleteList(linkedList *list);

extern linkedListNode* linkedListFindEntryWithVal(int val);

#endif /* INCLUDES_LINKEDLIST_PUB_H_ */
