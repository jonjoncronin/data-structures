/*
 * linkedList.c
 *
 *  Created on: Oct 25, 2014
 *      Author: joncronin
 */
#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "linkedList_pub.h"

int linkedListDoesEntryExist(linkedList *list, linkedListNode *node, linkedListNode *prevNode)
{
   linkedListNode *nodePtr;
   linkedListNode *prevNodePtr;
   bool found = false;

   if(!list || !node)
   {
      return -1;
   }

   if(list->length == 0)
   {
      return 0;
   }

   nodePtr = list->headPtr;
   prevNodePtr = NULL;

   while(nodePtr != NULL)
   {
      if(memcmp(node->data, nodePtr->data, node->dataSize) == 0)
      {
         found = true;
         break;
      }
      prevNodePtr = nodePtr;
      nodePtr = nodePtr->nextNode;
   }

   if(found)
   {
      prevNode = prevNodePtr;
      return 1;
   }
   else
   {
      prevNode = NULL;
      return 0;
   }
}

int linkedListAddEntryToHead(linkedList *list, linkedListNode *newNode)
{
   if(!list || !newNode)
   {
      return -1;
   }

   if(list->length == list->maxSize)
   {
      return -1;
   }

   list->length++;
   newNode->nextNode = list->headPtr;
   list->headPtr = newNode;
   return list->length;
}

int linkedListAddEntryToTail(linkedList *list, linkedListNode *newNode)
{
   if(!list || !newNode)
   {
      return -1;
   }

   if(list->length == list->maxSize)
   {
      return -1;
   }

   list->length++;
   list->tailPtr = newNode;
   newNode->nextNode = 0;

   return list->length;
}

int linkedListRemoveEntry(linkedList *list, linkedListNode *node)
{
   linkedListNode *prevNode;

   if(!list || !node)
      {
         return -1;
      }
   if(list->length == 0)
   {
      return -1;
   }

   if(linkedListDoesEntryExist(list,node,prevNode) == 0)
   {
      if(prevNode == NULL)
      {
         assert(prevNode == list->headPtr);
         list->headPtr = NULL;
      }
      else
      {
         prevNode->nextNode = node->nextNode;
      }
      list->length--;
      memset(node, 0, sizeof(linkedListNode));
      free(node);
   }
   return 1;
}

int linkedListGetLength(linkedList *list)
{
   return list->length;
}

int linkedListGetMaxSize(linkedList *list)
{
   return list->maxSize;
}

linkedList* linkedListCreateList(int maxSize)
{
   linkedList *newList;

   newList = malloc(sizeof(linkedList));
   newList->maxSize = maxSize;
   newList->headPtr = 0;
   newList->tailPtr = 0;
   newList->length = 0;

   return newList;
}

int linkedListDeleteList(linkedList *list)
{
   if(!list)
   {
      return -1;
   }

   while(list->headPtr != 0)
   {
      linkedListRemoveEntry(list,list->headPtr);
   }

   free(list);
   return 1;
}
#ifdef __cplusplus
}
#endif
