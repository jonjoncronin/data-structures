/*
 * trieNode_pub.h
 *
 *  Created on: May 8, 2017
 *      Author: joncronin
 */

#ifndef INCLUDE_TRIENODE_PUB_H_
#define INCLUDE_TRIENODE_PUB_H_

typedef struct _trieNode
{
      char key;
      //trieValue_t value;
      struct _trieNode *parent;
      struct _trieNode *child;
      struct _trieNode *prev;
      struct _trieNode *next;
}trieNode;

#endif /* INCLUDE_TRIENODE_PUB_H_ */
