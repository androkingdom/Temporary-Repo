#include <stdio.h> 

int main(){
    int range;
    printf("Enter range: ");
    scanf("%d", &range);

    for (int i = 0; i < range; i++){
        for (int space = range-(i); space > 1; space--){
            printf(" ");
        }
        for (int j = 0; j <= i ; j++){
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}