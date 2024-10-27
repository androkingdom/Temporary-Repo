#include <stdio.h> 

int main(){
    // && -> AND
    // || -> OR
    // ! -> NOT

    int a = 1, b = 2, c = 3, d = 2;

    printf("%d\n", a<b && a>c);
    printf("%d\n", a<b || a>c);
    printf("%d\n", !(a == d));
    
    return 0;
}