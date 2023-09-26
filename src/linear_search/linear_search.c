#include "linear_search.h"

int linear_programing_iterative(int* A, int n, int k) {
    int i = 1;
    while(i <= n && A[i] < k) i++;
    if(i <= n && A[i] == k)
        return i;
    return -1;
}

int linear_programing_recursive(int* A, int n, int k) {
    if(n == 0) return -1;
    if(A[n] == k) return n;
    return linear_programing_recursive(A, n - 1, k);
}