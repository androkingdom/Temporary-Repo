#include <stdio.h> 

int main(){
    float a, b;
    char op;

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter number 2: ");
    scanf("%f", &b);

    switch (op){
        case '+':
            printf("%.2f %c %.2f = %.2f\n", a, op, b, a+b);
            break;
        case '-':
            printf("%.2f %c %.2f = %.2f\n", a, op, b, a-b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2f %c %.2f = %.2f\n", a, op, b, a / b);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '*':
            printf("%.2f %c %.2f = %.2f\n", a, op, b, a*b);
            break;
        default:
            printf("Wrong Input!!\n");
    }

    return 0;
}