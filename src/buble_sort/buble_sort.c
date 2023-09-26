#include "buble_sort.h"

void buble_sort(Item* items, int lo, int hi) {
    if(lo >= hi) return;

    for(int i = lo; i < hi; i++) {
        if(less(items[i+1], items[i])) {
            exch(items[i+1], items[i]);
        }
    }
    buble_sort(items, 0, hi - 1);
}
