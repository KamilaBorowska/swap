#include <string.h>
#include <stdlib.h>

#define SWAP(a, b) swap_internal(&(a), &(b), sizeof *(1 ? &(a) : &(b)))

/* Inline only works in C99 compilers. */
inline
#endif
static void swap_internal(void *a, void *b, size_t size) {
    char *tmp = malloc(size);
    memcpy(tmp, a, size);
    memmove(a, b, size);
    memcpy(b, tmp, size);
    free(tmp);
}
