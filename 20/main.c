#include <stdio.h> 

int isPrime(int n){
    if(n <= 1){
        return 0;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int range;
    printf("Enter range: ");
    scanf("%d", &range);

    printf("\nList Of Prime Number Upto %d\n", range);
    for (int i = 1; i <= range ; i++){
        if(isPrime(i)){
            printf("%d\n", i);
        }
    }
    
    return 0;
}