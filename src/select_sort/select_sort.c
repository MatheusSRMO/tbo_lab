#include "select_sort.h"

int find_index_lower(Item* items, int lo, int hi) {
    int lower = __INT_MAX__;
    int i = -1;

    for(int k = lo; k <= hi; k++) {
        if(items[k] < lower) {
            lower = items[k];
            i = k;
        }
    }

    return i;
}

void select_sort(Item* items, int lo, int hi) {
    for(int i = lo; i < hi; i++) {
        int k = find_index_lower(items, i, hi);
        exch(items[i], items[k]);
    }
}