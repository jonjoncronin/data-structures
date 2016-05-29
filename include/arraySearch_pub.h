/*
 * arraySearch_pub.h
 *
 *  Created on: May 28, 2016
 *      Author: joncronin
 */

#ifndef INCLUDE_ARRAYSEARCH_PUB_H_
#define INCLUDE_ARRAYSEARCH_PUB_H_

#ifdef __cplusplus
extern "C" {
#endif

extern bool doesEntryExistLinear(void *data, void* array, int arraySize);
extern bool doesEntryExistBinary(void *data, void* array, int arraySize);
#ifdef __cplusplus
}
#endif
#endif /* INCLUDE_ARRAYSEARCH_PUB_H_ */
