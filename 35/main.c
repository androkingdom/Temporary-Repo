#include <stdio.h> 

int main(){
    int range;
    printf("Enter range: ");
    scanf("%d", &range);

    for (int i = 0; i <= range/2; i++){
        for (int sp = range/2 - i; sp >= 1; sp--){
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = range/2; i > 0; i--){
        for (int sp = 0; sp <= range/2 - i; sp++){
            printf(" ");
        }

        for (int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}