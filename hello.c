#include <stdio.h>
#include <stdlib.h>
#include "itoa.h"
#include "sundry.h"

int main() {
    printf("Hello, world!\n");

    int num = 1234500;
    char *s1, *s2;
    s1 = int2str(s1, num);
    s2 = itoa(s2, num);

    printf("int2str: %s\n", s1);
    printf("itoa: %s\n", s2);

    free(s1);
    free(s2);

    sundry();
}
