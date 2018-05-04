#include <stdio.h>
#include <stdlib.h>
#include "itoa.h"

int count(int n, int d);

int search(char *s, char d);

char *int2str(char *s, int num);

char *itoa(char *s, int n);

int main(void) {
    int n = count(10, 0);
    printf("n = %d\n", n);
    return 0;
}

int search(char *s, char d) {
    printf("s: %s\n", s);
    int i = 0, c, r = 0;
    while ((c = s[i]) != '\0') {
        if (c == d) {
            r++;
        }
        i++;
    }
    return r;
}

int count(int n, int d) {
    int i, r = 0;
    char *s;
    for (i = 0; i <= n; i++) {
        s = int2str(s, i * i);
        r += search(s, d + '0');
        free(s);
    }
    return r;
}

