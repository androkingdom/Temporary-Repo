#include <stdio.h> 

int sumDigits(int number){
    int sum = 0;

    while(number != 0){
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of all digit of %d: %d", number, sumDigits(number));

    return 0;
}