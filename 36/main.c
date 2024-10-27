#include <stdio.h> 

int main(){
    int a, b, c, d;

    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter number: ");
    scanf("%d", &b);
    printf("Enter number: ");
    scanf("%d", &c);
    printf("Enter number: ");
    scanf("%d", &d);

    if(a == b && b == c && c == d){
        printf("Numbers are equal\n");
    }else if(a > b && a > c && a > d){
        printf("%d is greatest\n", a);
    }else if(b > a && b > c && b > d){
        printf("%d is greatest\n", b);
    }else if(c > a && c > b && c > d){
        printf("%d is greatest\n", c);
    }else if(d > a && d >b && d > c){
        printf("%d is greatest\n", d);
    }
    return 0;
}