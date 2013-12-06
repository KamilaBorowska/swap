#include <string.h>

#define SWAP(a, b) swap_internal(&(a), &(b), sizeof *(1 ? &(a) : &(b)))

#if __STDC_VERSION__ < 199901L
/* For malloc, not needed in C99 */
#include <stdlib.h>
#else
/* Inline only works in C99 compilers. */
inline
#endif
static void swap_internal(void *a, void *b, size_t size) {
#if __STDC_VERSION__ < 199901L
    char *tmp = malloc(size);
#else
    char tmp[size];
#endif
    memcpy(tmp, a, size);
    memmove(a, b, size);
    memcpy(b, tmp, size);
#if __STDC_VERSION__ < 199901L
    free(tmp);
#endif
}
