#include <stdio.h> 

int main(){
    char x;

    printf("Enter character: ");
    scanf("%c", &x);

    printf("ASCII value of %c is %d\n", x, x);

    return 0;
}