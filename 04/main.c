#include <stdio.h> 

int main(){
    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);

    printf("The average : %f\n", (num1 + num2 + num3)/3.0);

    return 0;
}