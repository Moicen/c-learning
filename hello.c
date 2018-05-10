#include <stdio.h>
#include "itoa.h"

int main() {
    printf("Hello, world!\n");

    int num = 12345;
    char *s1, *s2;
    s1 = int2str(s1, num);
    s2 = itoa(s2, num);

    printf("int2str: %s\n", s1);
    printf("itoa: %s\n", s2);
}
