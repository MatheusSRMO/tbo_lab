#ifndef _ITEM_H_
#define _ITEM_H_

typedef int Item;
#define key(A) (A) // Get key to item
#define less(A, B) (key(A) < key(B)) // verify if A is lower B
#define exch(A, B) { Item t = A; A = B; B = t; } // Swap A and B
#define compexch(A, B) if (less(B, A)) exch(A, B) // Swap if B < A


#endif // _ITEM_H_