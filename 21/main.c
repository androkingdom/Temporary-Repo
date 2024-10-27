#include <stdio.h> 

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n, r, C;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter value for r: ");
    scanf("%d", &r);

    if(n < r){
        printf("Error: n should be greater than r\n");
        return -1;
    }

    C = factorial(n)/(factorial(r)*factorial(n-r));

    printf("%dC%d = %d", n, r, C);
    return 0;
}