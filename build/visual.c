#include <stdio.h>

int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == '\t') {
            c = 't';
            putchar('\\');
        } 
        if(c == '\b') {
            c = 'b';
            putchar('\\');
        }
        if(c == '\\'){
            c = '\\';
            putchar('\\');
        }
        putchar(c);
    }
    return 0;
}
