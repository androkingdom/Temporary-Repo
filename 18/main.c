#include <stdio.h> 

int reverseNum(int num){
    int reverse = 0;

    while (num != 0){
        int unitDigit = num % 10;
        reverse = (reverse*10) + unitDigit;
        num /= 10;
    }
    
    return reverse;
}

int main(){
    int number;
    
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Revered Number :%d", reverseNum(number));

    return 0;
}