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

extern bool doesEntryExistLinear(int value, int array[], int arraySize);
extern bool doesEntryExistBinary(int value, int array[], int arraySize);
#ifdef __cplusplus
}
#endif
#endif /* INCLUDE_ARRAYSEARCH_PUB_H_ */
