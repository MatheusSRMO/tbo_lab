#include "linear_search.h"

int linear_search_iterative(int* A, int n, int k) {
    for(int i = 0; i < n; i++) {
        if(A[i] == k) return i;
    }
    return -1;
}

int linear_search_recursive(int* A, int n, int k) {
    if(n == 0 || A[n - 1] == k) return n - 1;
    return linear_search_recursive(A, n - 1, k);
}
