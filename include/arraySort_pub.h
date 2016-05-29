/*
 * arraySort_pub.h
 *
 *  Created on: May 28, 2016
 *      Author: joncronin
 */

#ifndef INCLUDE_ARRAYSORT_PUB_H_
#define INCLUDE_ARRAYSORT_PUB_H_

#ifdef __cplusplus
extern "C" {
#endif

extern int bubbleSortArray(void *array, int arraySize);
extern int insertSortArray(void *array, int arraySize);
extern int mergeSortArray(void *array, int arraySize);

#ifdef __cplusplus
}
#endif
#endif /* INCLUDE_ARRAYSORT_PUB_H_ */
