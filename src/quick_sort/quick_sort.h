#ifndef _QUICK_SORT_H_
#define _QUICK_SORT_H_
#include <stdio.h>
#include <stdlib.h>

/*
 * A -> Array
 * lo -> Lower limit of the range
 * hi -> Upper limit of the range
 */
int partition(int *A, int lo, int hi);

void quick_sort(int *A, int lo, int hi);

#endif // _QUICK_SORT_H_