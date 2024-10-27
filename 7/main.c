#include <stdio.h> 

int main(){
    int a, b, c;

    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);

    if(a == b && a == c){
        printf("Number are equal\n");
    }else if(a > b && a > c){
        printf("%d is greatest\n", a);
    }else if(b > a && b > c){
        printf("%d is greatest\n", b);
    }else if(c > a && c > b){
        printf("%d is greatest\n", c);
    }

    return 0;
}