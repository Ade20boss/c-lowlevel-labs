#include <stdio.h>
#define RATE_PER_KG 10.5
#define HEAVY_FEE 50.0
#define LIMIT 1000

int main(){
    int c;
    long long total = 0;
    printf("Enter package weight (grams): ");

    while((c = getchar()) != '\n' && c <= '9'){
        c = c - '0';
        total = total * 10 + c;
    }
    float base_cost = (float)total / 1000.0 * RATE_PER_KG;

    if(total > LIMIT){
        float cost = base_cost + HEAVY_FEE;
        printf("*** OVERWEIGHT SURCHARGE APPLIED ***\n");
        printf("--- RECEIPT ---\n");
        printf("Weight: %d\n", total);
        printf("Cost: %.2f\n", cost);
    }
    else{
        printf("--- RECEIPT ---\n");
        printf("Weight: %d\n", total);
        printf("Cost: %.2f\n", base_cost);
    }  

    return 0;

}

/*EXPLAINING WHAT'S GOING ON IN THE CODE ABOVE:
First we include the standard input-output library to use functions like printf and getchar.
Next we define some symbolic constants for our calculations

After that we define the main function, inside the main function, we define two variables: c(which is a buffer) to hold each character input and total to accumulate
the total weight in grams(basically string to integer parsing).

Then we prompt the user to enter the package weight in grams. We use a while loop to read each character input until we encounter a newline character. Inside the loop, 
we convert each character to its integer value by subtracting the ASCII value of '0' and accumulate the total weight.

After that, i feel the rest is self explanatory, we calculate the base cost based on the weight and rate per kg., and check if the weight exceeds the limit to apply an overweight surcharge if necessary.
Finally, we print the receipt with the weight and cost. for rate per kg, heavy fee, and weight limit. for rate per kg, heavy fee, and weight limit.

*/