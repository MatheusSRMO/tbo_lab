#include <stdio.h>
#include "src/linear_search/linear_search.h"

int main(void) {
    int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = 10;
    int k = 9;
    int i = linear_programing_iterative(A, n, k);
    printf("Index: %d\n", i);
    return 0;
}