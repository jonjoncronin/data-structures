/*
 * trie_pub.h
 *
 *  Created on: May 8, 2017
 *      Author: joncronin
 */

#ifndef INCLUDE_TRIE_PUB_H_
#define INCLUDE_TRIE_PUB_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "trieNode_pub.h"

void trieCreate(trieNode **root);
trieNode* trieSearch(trieNode *root, const char *key);
void trieAdd(trieNode **root, char *key);
void trieRemove(trieNode **root, char *key);
void trieDestroy(trieNode *root);

#ifdef __cplusplus
}
#endif

#endif /* INCLUDE_TRIE_PUB_H_ */
