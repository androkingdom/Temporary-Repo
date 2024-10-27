#include <stdio.h> 

int main(){
    int i = 1, sum = 0;

    do{
        sum += i;
        i++;
    }while (i <= 10);
    
    printf("Sum upto 10 natural number: %d\n", sum);
    
    return 0;
}