#ifndef _QUICK_SORT_V2_H_
#define _QUICK_SORT_V2_H_
#define CUTOFF 16
#include "../item.h"
#include "../insert_sort/insert_sort.h"

void quick_sort_v2(Item* items, int lo, int hi);

#endif // _QUICK_SORT_V2_H_