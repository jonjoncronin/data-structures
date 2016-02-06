/*
 * linkedList.c
 *
 *  Created on: Oct 25, 2014
 *      Author: joncronin
 */
#include "../includes/linkedList_pub.h"
#include <stdlib.h>

/*
 * \brief  linkedListEquals compares 2 linkedLists to see if they contain entries
 *         with the same data.
 * \pre    srcList and dstList are valid pointers with the same length.
 * \post   srcList and dstList are never modified
 * \return -2 if input params are invalide, 1 if lists are equal, 0 if not equal
 */
int linkedListEquals(linkedList *srcList, linkedList *dstList)
{
   int result = -2;
   int allEntriesFound = 1;
   linkedListNode *nodePtr1, *nodePtr2;

   /* check to make sure the inputs are valid pointers */
   if(!srcList || !dstList)
   {
      return result;
   }

   /* check to make sure the lists have something in them */
   if(srcList->length != dstList->length)
   {
      return result;
   }

   /* get the head of the destination list */
   nodePtr1 = dstList->headPtr;
   while(nodePtr1)
   {
      int entryFound = 0;
      /* get the head of the source list */
      nodePtr2 = srcList->headPtr;
      /* go through the source list and compare each node with the current
       * entry from the destination list
       */
      while(nodePtr2)
      {
         if(0 == linkedListNodeEquals(nodePtr2,nodePtr1))
         {
            entryFound = 1;
            break;
         }
         else
         {
            nodePtr2 = nodePtr2->nextNode;
         }
      }
      if(entryFound == 1)
      {
         /* get the next entry in the destination list */
         nodePtr1 = nodePtr1->nextNode;
      }
      else
      {
         allEntriesFound = 0;
         break;
      }
   }

   return allEntriesFound;
}

int linkedListAddVal(linkedList *list, int val)
{
   linkedListNode *newNode;

   if(!list)
   {
      return -1;
   }

   if(list->length == list->maxSize)
   {
      return -1;
   }
   newNode = malloc(sizeof(linkedListNode));
   if(!newNode)
   {
      return -1;
   }

   newNode->data = val;
   return linkedListAddEntryInOrder(list,newNode);
}
int linkedListAddEntryToHead(linkedList *list, linkedListNode *newNode)
{
   if(!list || !newNode)
   {
      return -1;
   }

   if(list->length == list->maxSize)
   {
      free(newNode);
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

int linkedListAddEntryInOrder(linkedList *list,linkedListNode *newNode)
{
   //FIXME onla throwing everything onto head for time being, order later
   // Also need to add error checking
   linkedListAddEntryToHead(list, newNode);  

   return 1;
}

int linkedListRemoveEntry(linkedList *list, linkedListNode *node)
{
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

linkedListNode* linkedListFindEntryWithVal(int val)
{
   return NULL;
}


