#include "./includes/linkedList_pub.h"
#include <stdio.h>

void main()
{
   linkedList *myList = linkedListCreateList(5);
   linkedListNode *nodePtr;

   linkedListAddVal(myList, 3);
   linkedListAddVal(myList, 2);
   linkedListAddVal(myList, 5);

   nodePtr = myList->headPtr;
   for (int i=0; i<myList->length; i++)
   {
      printf("Node[%d] = %d\n", i, nodePtr->data);
      nodePtr = nodePtr->nextNode;
   }

} 
