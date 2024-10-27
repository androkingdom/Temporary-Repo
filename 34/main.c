#include <stdio.h> 

int main(){
    int range;
    printf("Enter range: ");
    scanf("%d", &range);

    if(range%2==0){
        printf("Error: Only odd number of row\n");
        return 1;
    }

    for (int i = 0; i < range; i++){
        if(i <= range/2){
            for (int j = 0; j <= i; j++){
                printf("*");
            }
        }else{
            for (int j = range -i; j >= 1; j--){
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}