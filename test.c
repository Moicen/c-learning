#include <stdio.h>
#include "Config.h"
#include "csapp.h"

int main() {

    int x = 123, y = 234;
    int ok = tadd_ok(x, y);
    printf("ok: %d\n", ok);
    return 0;
}