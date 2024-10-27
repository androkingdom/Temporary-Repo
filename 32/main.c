#include <stdio.h> 
#include <math.h>

int main(){
    int choice;float num;

    printf("Operations:\n");
    printf("1. Round-Off\n2. Ceiling\n3. Floor\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter number: ");
    scanf("%f", &num);

    switch(choice){
        case 1:
            printf("Result: %.0f\n", round(num));
            break;
        case 2:
            printf("Result: %.0f\n", ceil(num));
            break;
        case 3:
            printf("Result: %.0f\n", floor(num));
            break;
        default:
            printf("Invalid input\n");
            break;
    }
    return 0;
}