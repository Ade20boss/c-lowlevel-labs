#include <stdio.h>

int main(){
    int total = 0;
    int c;
    while ((c = getchar()) >= '0' && c <= '9'){
        c = c - '0';
        total = (total * 10) + c;
    }
    printf("%d", total + 30);
    return 0;
}