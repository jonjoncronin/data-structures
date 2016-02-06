/*
 * linkedListNode.c
 *
 *  Created on: Oct 25, 2014
 *      Author: joncronin
 */
#include "../includes/linkedList_pub.h"

/*
 * Compares the data contents of the two nodes to one another and returns the 
 * result of the compare.
 *
 * Return Values
 * -2 if either src or dst is NULL
 * -1 if src data is < dst data
 *  0 if src data is equal to dst data
 *  1 if src data is > dst data
 */
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
