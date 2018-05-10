#include <stdio.h>
#include <limits.h>
#include "Config.h"
#include "csapp.h"

void test(int x, int y);

int main() {

    test(123, 234);
    test(INT_MIN, INT_MIN + 1);
    test(INT_MAX, INT_MAX - 1);
    test(INT_MIN, INT_MAX);
    test(INT_MAX, INT_MIN);
    test(0, INT_MIN);
    test(-1, INT_MAX);
    test(-2, INT_MAX);


    return 0;
}

void test(int x, int y) {
    int ok = tsub_ok(x, y);
    printf("%d - %d: %s\n", x, y, ok ? "ok" : "not ok");
}