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

extern int selectionSortArray (int array[], int arraySize);
extern int bubbleSortArray(int array[], int arraySize);
extern int insertSortArray(int array[], int arraySize);
extern int mergeSortArray(int array[], int arraySize);
extern int quickSortArray(int array[], int arraySize);
extern int shellSortArray(int array[], int arraySize);

#ifdef __cplusplus
}
#endif
#endif /* INCLUDE_ARRAYSORT_PUB_H_ */
