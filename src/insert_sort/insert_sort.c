#include "insert_sort.h"

/*
 * Passa o array para frente
 * A cada passada, vai trocando enquanto o numero atual for menor que o numero anterior
 */

void insert_sort(Item* items, int lo, int hi) {
    for(int i = lo; i <= hi; i++) {
        for (int k = i; k >= 1 && less(items[k], items[k-1]); k--) {
            exch(items[k], items[k-1]);
        }
    }
}
