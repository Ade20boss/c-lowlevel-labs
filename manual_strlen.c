#include <stdio.h>

int main(){
    char *s = "Hello";
    char *start = s;

    int length = 0;

    while(*s != '\0'){
        s++;
        length++;
    }
    printf("%d\n", length);
    printf("%s\n", start);

    return 0;

}
