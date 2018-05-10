#include <math.h>
#include <stdlib.h>
#include <stdio.h>

char *int2str(char *s, int num) {
    size_t size = 0;
    int n = abs(num);
    if (num == 0) size = 1;
    else {
        if (num < 0) size = 1;
        size += (int) ceil(log10(n));
    }
    s = (char *) malloc(size + 1);
    size_t i;
    for (i = size - 1; i >= 0; i--) {
        s[i] = n % 10 + '0';
        n = (int) floor(n / 10);
    }
    if (num < 0) s[0] = '-';
    return s;
}

char *itoa(char *s, int n) {
    size_t count = 0;
    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) count = 1;
        count += (int) ceil(log10(abs(n)));
    }
    s = (char *) malloc(count + 1);
    sprintf(s, "%d", n);
    return s;
}