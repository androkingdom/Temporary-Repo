#include <stdio.h> 
#include <conio.h>

int main(){
    int c;

    printf("Enter char: ");
    c = getch();
    printf("\nWith getch() : ");
    putchar(c);
    printf("\n");

    printf("Enter char: ");
    c = getchar();
    printf("With getchar() : ");
    putchar(c);
    printf("\n");

    return 0;
}