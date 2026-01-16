#include <stdio.h>
#define OUT 1 // State indicating we are currently outside a word
#define IN 0  // State indicating we are currently inside a word

// Function to print the signature/header of the tool
void print_sig(void){
    printf("=====================================\n");
    printf("=       Stream Auditor Tool        =\n");
    printf("=   Counts lines, words, and chars  =\n");
    printf("=====================================\n");
}

// Custom print function that iterates through a string using a pointer
// and prints character by character until the null terminator is reached.
void print(const char *s){
    while(*s != '\0'){
        putchar(*s); // Print the character at the current pointer location
        s++;         // Move the pointer to the next character address
    }
    putchar('\n'); // Print a newline at the end
}



int main(){
    int buffer, state; // buffer stores the current char, state tracks if we are inside/outside a word
    long long nl = 0, nw = 0, nc = 0; // Counters for newlines, words, and characters
    state = OUT; // Initialize state as OUT (outside a word)

    // Loop reads characters from standard input one by one until End Of File (EOF)
    while((buffer = getchar()) != EOF){
        nc++; // Increment character count for every character read
        if(buffer == '\n'){
            nl++; // Increment line count if newline character is found
            putchar('\n');
            state = OUT; // A newline means we are definitely outside a word now
        }
        else if(buffer == ' ' || buffer == '\t'){
            putchar('\n');
            state = OUT; // Spaces and tabs separate words, so we are outside a word
        }
        else if (state == OUT){
            // If we were outside a word and encountered a non-separator character,
            // it means we just started a new word.
            nw++; // Increment word count
            putchar(buffer);
            state = IN; // Update state to inside a word
        }
        else if(state == IN){
            putchar(buffer);
        }
    }

    // Print the results
    print_sig();
    printf("\n");
    printf("Words: %lld\n", nw);
    printf("Lines: %lld\n", nl);
    printf("Chars: %lld\n", nc);
    
    print("--- ANALYSIS COMPLETE ---");

    return 0;


}