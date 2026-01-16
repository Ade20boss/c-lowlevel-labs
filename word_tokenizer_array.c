#include <stdio.h>
#define MAX_LIMIT 1000

int main(){
    int buffer, i=0, j=0;
    char characters[MAX_LIMIT];

    while((buffer = getchar()) != EOF && i < MAX_LIMIT - 1){
        characters[i] = buffer;
        i++;
    }
    characters[i] = '\0';
    putchar('\n');
    putchar('\n');

    for(j=0; j<i; j++){
        if(characters[j] == '\n' || characters[j] == ' ' || characters[j] == '\t'){
            putchar('\n');
        }
        else {
            putchar(characters[j]);
    }
}
}