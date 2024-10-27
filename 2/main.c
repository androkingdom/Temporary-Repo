#include <stdio.h> 

int main(){
    int num1, num2, sum, product;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    product = num1 * num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d X %d = %d\n", num1, num2, product);

    return 0;
}