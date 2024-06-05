#include <stdio.h>
#include <limits.h>

int main() {
    #ifndef LONG_BIT
    #define LONG_BIT (8 * SIZEOF_LONG)
    #endif
    printf("LONG_BIT: %d\n", LONG_BIT);
    printf("sizeof(long): %zu\n", sizeof(long));
    return 0;
}