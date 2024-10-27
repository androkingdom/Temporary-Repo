#include <stdio.h> 

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n, r, P;
    printf("Enter value for n: ");
    scanf("%d", &n);
    printf("Enter value for r: ");
    scanf("%d", &r);

    if(n < r){
        printf("Error: n should be greater than r\n");
        return -1;
    }

    P = factorial(n)/(factorial(n-r));

    printf("%dP%d = %d\n", n, r, P);
    return 0;
}