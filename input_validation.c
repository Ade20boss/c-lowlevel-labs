#include <stdio.h>

void my_scanf(int *ptr){
    int total = 0;
    int c = getchar();

    while(c == ' ' || c == '\n' || c == '\t'){
        c = getchar();
    }
    while (c >= '0' && c <= '9'){
        c = c - '0';
        total = (total * 10) + c;
        c = getchar();
    }
    *ptr = total;
}

void input_validator(const int PIN){
    int entry;
    do {
        printf("Enter Pin: ");
        my_scanf(&entry);
        if(entry == PIN){
            printf("PIN MATCH, ACCESS GRANTED\n");
        }
        else{
            printf("INCORRECT PIN, ACCESS DENIED\n");
        }
    } while(entry != PIN);
    
}

int main(){
    input_validator(100345);
}