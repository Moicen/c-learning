#include <stdio.h>
#include <string.h>
static int j;
void fun1(void) {
    static int i = 0;
    i++;
    printf("i: %d ", i);
}
void fun2(void) {
    j = 0;
    j++;
    printf("j: %d\n", j);
}

void testSize(int b[100]){
    int *p = NULL;
    printf("size of p: %d\n", sizeof(p));
    printf("size of *p: %d\n", sizeof(*p));

    int a[100];
    printf("sizeof a: %d\n", sizeof(a));
    printf("sizeof a[100]: %d\n", sizeof(a[100]));
    printf("sizeof a[102]: %d\n", sizeof(a[102]));
    printf("sizeof &a: %d\n", sizeof(&a));
    printf("sizeof &a[0]: %d\n", sizeof(&a[0]));

    printf("sizeof b: %d\n", sizeof(b));
}

void arrstrlen() {
    char a[1000];
    int i;
    for(i=0; i<1000; i++) {
        a[i] = -1-i;
        printf("a[%d] = %d, ", i, a[i]);
        if((i + 1) % 20 == 0){
            printf("\n");
        }
    }
    printf("len of a: %d\n",strlen(a));

    char b[5];
    for(i = 0; i < 5; i++){
        b[i] = i - 1;
    }
    printf("b: %s\n", b);
    printf("len of b: %d\n", strlen(b));
}

int sundry() {
    printf("sundry: \n");
    int k;
    for(k=0; k<10; k++) {
        fun1();
        fun2();
    }
    int b[100];
    testSize(b);
    arrstrlen();
    return 0;
}


