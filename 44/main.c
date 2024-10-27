#include <stdio.h> 
#include <math.h>

int main(){
    float num;
    printf("Round-off:-\n");
    printf("Enter number: ");
    scanf("%f", &num);
    printf("Result: %.0f\n", round(num));
    
    return 0;
}