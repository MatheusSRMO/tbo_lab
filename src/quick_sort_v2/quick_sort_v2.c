#include "quick_sort_v2.h"


int partition_v2(Item *A, int lo, int hi) {
    int i = lo;
    int j = hi + 1; // Porque hi + 1??? R: por que --j

    int a = A[i];
    while(1) {
        while(less(A[++i],a)) {  // Find item on left to swap
            if(i == hi) break;
        }
        while(less(a, A[--j])) {  // Find item on right to swap
            if(j == lo) break;
        }
        if(i >= j) break; // Check if pointers cross
        exch(A[i], A[j]);
    }
    exch(A[lo], A[j]); // Swap with partition_v2ing item
    return j;
}


void quick_sort_v2(Item *items, int lo, int hi) {
    if (hi <= lo + CUTOFF - 1) {
        insert_sort(items, lo, hi);
        return;
    }
    int j = partition_v2(items, lo, hi);
    quick_sort_v2(items, lo, j-1);
    quick_sort_v2(items, j+1, hi);
}

