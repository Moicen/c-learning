#include <stdint.h>
/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y) {
    int s = x + y;
    int k = __WORDSIZE - 1;
    int sk = s >> k;
    return (sk == x >> k) || (sk == y >> k);
}