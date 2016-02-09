/*
 * linkedListNode_pub.h
 *
 *  Created on: Feb 6, 2016
 *      Author: joncronin
 */

#ifndef INCLUDE_LINKEDLISTNODE_PUB_H_
#define INCLUDE_LINKEDLISTNODE_PUB_H_

/* Linked List node structures and public APIs */
typedef struct _linkedListNode
{
      void *data;
      struct _linkedListNode *nextNode;
} linkedListNode;

#endif /* INCLUDE_LINKEDLISTNODE_PUB_H_ */
