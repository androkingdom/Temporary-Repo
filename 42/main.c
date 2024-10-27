#include <stdio.h> 

int main(){
    for (int i = 97; i <= 122; i++){
        printf("%c ", i);
        if(i % 6 == 0){
            printf("\n");
        }
    }
    
    return 0;
}