#include "quick_sort.h"


int random_in_range(int lo, int hi) {
    return rand() % (hi - lo + 1) + lo;
}


void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int partition(int *A, int lo, int hi) {
    int i = lo;
    int j = hi + 1; // Porque hi + 1??? R: por que --j

    int k = random_in_range(lo, hi);
    swap(&A[k], &A[i]);
    int a = A[i];
    while(1) {
        while(A[++i] < a) {  // Find item on left to swap
            if(i == hi) break;
        }
        while(a < A[--j]) {  // Find item on right to swap
            if(j == lo) break;
        }
        if(i >= j) break; // Check if pointers cross
        swap(&A[i], &A[j]);
    }
    swap(&A[lo], &A[j]); // Swap with partitioning item
    return j;
}


void quick_sort(int *A, int lo, int hi) {
    if(hi <= lo) return; // Por que esse caso base??
    int j = partition(A, lo, hi);
    quick_sort(A, lo, j-1);
    quick_sort(A, j+1, hi);
}
