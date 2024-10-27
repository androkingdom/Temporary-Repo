#include <stdio.h> 

int main(){
    int a = 0, b = 1, fibo, range;
    printf("Enter range: ");
    scanf("%d", &range);

    printf("Fibonacci sequence upto %d terms:\n", range);

    for (int i = 0; i < range; i++){
        printf("%d\n", a);
        fibo = a + b;
        a = b;
        b = fibo;
    }
    
    return 0;
}