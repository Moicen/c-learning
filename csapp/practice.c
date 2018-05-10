#include <stdint.h>
#include <limits.h>

/* Determine whether arguments can be added without overflow */
int tadd_ok(int x, int y) {
    int s = x + y;
    int k = __WORDSIZE - 1;
    int sk = s >> k;
    return (sk == x >> k) || (sk == y >> k);
}

/* Determine whether arguments can be subtracted without overflow */
int tsub_ok(int x, int y) {
    int min = y == INT_MIN;
    if(min) return x > 0;
    return tadd_ok(x, -y);
}
