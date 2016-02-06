/*
 * linkedListNode.c
 *
 *  Created on: Oct 25, 2014
 *      Author: joncronin
 */
#include "linkedList_pub.h"

int linkedListNodeEquals(linkedListNode *srcNode, linkedListNode *dstNode)
{
   int result = -2;

   if(!srcNode || !dstNode)
   {
      return result;
   }

   if(srcNode->data == dstNode->data)
   {
      result = 0;
   }
   else if(srcNode->data < dstNode->data)
   {
      result = -1;
   }
   else
   {
      result = 1;
   }

   return result;
}
