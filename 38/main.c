#include <stdio.h> 

int absolute(int a){
    return (a < 0) ? -a : a;
}

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Absolute value of %d: %d\n", number, absolute(number));
    return 0;
}