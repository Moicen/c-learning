#include <stdio.h>

int trim() {
    int c, space = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (space == 1) continue;
            space = 1;
        } else space = 0;
        putchar(c);
    }
}
