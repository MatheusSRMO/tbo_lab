#include "quick_sort.h"


void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int partition(Item *A, int lo, int hi) {
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
    exch(A[lo], A[j]); // Swap with partitioning item
    return j;
}



void quick_sort(Item *A, int lo, int hi) {
    if(hi <= lo) return; // Por que esse caso base??
    int j = partition(A, lo, hi);
    quick_sort(A, lo, j-1);
    quick_sort(A, j+1, hi);
}
