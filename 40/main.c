#include <stdio.h> 

void fibo(int terms){
    int a = 0, b = 1, fib;
    for (int i = 0; i < terms; i++){
        printf("%d\n", a);
        fib = a + b;
        a = b;
        b = fib;
    }
}

int main(){
    int range;
    printf("Enter range: ");
    scanf("%d", &range);

    if(range <= 0){
        printf("Atleast 1  term!!");
        return -1;
    }

    fibo(range);

    return 0;
}