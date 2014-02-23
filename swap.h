#include <string.h>
#include <stdlib.h>

#define SWAP(a, b) swap_internal(&(a), &(b), sizeof *(1 ? &(a) : &(b)))

#if __STDC_VERSION__ >= 199901L
/* Inline only works in C99 compilers. */
inline
#endif
static void swap_internal(void *a_ref, void *b_ref, size_t size) {
    size_t i;
    char *a = a_ref;
    char *b = b_ref;
    for (i = 0; i < size; i++) {
        char tmp = *a;
        *a = *b;
        *b = tmp;

        /*
         * Pointer arithmetic, in order to not introduce signed
         * integers into math.
         */
        a++;
        b++;
    }
}
