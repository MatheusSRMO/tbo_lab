#include "quick_sort_v3.h"


int partition_v3(Item *A, int lo, int hi) {
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

int median_of_3(Item* A, int lo, int hi) {
    int a = lo + ( rand() % hi );
    int b = lo + ( rand() % hi );
    int c = lo + ( rand() % hi );
    

    if(A[a] > A[b] && A[a] < A[c]) return a;
    if(A[b] > A[a] && A[b] < A[c]) return b;
    return c;
}


void quick_sort_v3(Item *A, int lo, int hi) {
    if(hi <= lo) return; // Por que esse caso base??

    int median = median_of_3(A, lo, hi);
    exch(A[lo], A[median]);

    int j = partition_v3(A, lo, hi);
    quick_sort_v3(A, lo, j-1);
    quick_sort_v3(A, j+1, hi);
}
