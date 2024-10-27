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

int isPalindrome(int x){
    return x == reverseNum(x) && !(x < 0);
}

int main(){
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if(isPalindrome(number)){
        printf("%d is Palindrome\n", number);
    }else{
        printf("%d is not Palindrome\n", number);
    }

    return 0;
}