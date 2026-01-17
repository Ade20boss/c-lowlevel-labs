#include <stdio.h>
const unsigned int value = 4294967295;

void my_scanf(unsigned int *ptr){
    unsigned int total = 0;
    int c = getchar();

    while (c != EOF ){
        if (c >= '0' && c <= '9'){
            c = c - '0';
            if (total <= (value - c)/10){
                total = (total * 10) + c;
                c = getchar();
            }
            else{
                printf("Overflow detected! Discarding excess input.\n");
                while (c != '\n' && c != EOF) {
                    c = getchar();
                }
                break;

            }
        }
        else if(c == ' ' || c == '\t'){
            c = getchar();
            continue;
        }
        else{
            break;
        }
    
    }
    *ptr = total;
}

void input_validator(const unsigned int PIN){
    unsigned int entry;
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
