#include <stdio.h> 

int factorial(int n){
    int facto = 1;

    for(int i = 1; i <= n; i++){
        facto *= i;
    }

    return facto;
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Factorial of %d: %d\n", num, factorial(num));
    return 0;
}