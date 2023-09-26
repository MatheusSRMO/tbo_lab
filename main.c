#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "src/item.h"
#include "src/buble_sort/buble_sort.h"
#include "src/quick_sort/quick_sort.h"
#include "src/select_sort/select_sort.h"
#include "src/insert_sort/insert_sort.h"
#include "src/quick_sort_v2/quick_sort_v2.h"
#include "src/quick_sort_v3/quick_sort_v3.h"
#include "src/linear_search/linear_search.h"

extern void sort(Item *a, int lo, int hi) {
    quick_sort_v3(a, lo, hi);
}

void print_array(Item* items, int size) {
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d", items[i]);
        if(i != size-1) printf(", ");
    }
    printf("]\n");
}

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("Usage: ./main <int: Size>\n");
        return 1;
    }
    int N = atoi(argv[1]);

    Item* items = malloc(sizeof(Item) * N);
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &items[i]);
    }

    clock_t start = clock();
    sort(items, 0, N-1);
    clock_t end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Time: %f seconds\n", time);
    // print_array(items, N);
    free(items);
    return 0;
}
