#include <stdio.h> 

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("The factors of %d: ", n);
    for (int i = 1; i*i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
            if(i != n/i){
                printf("%d ", n/i);
            }
        }
    }
    printf("\n");
    
    return 0;
}