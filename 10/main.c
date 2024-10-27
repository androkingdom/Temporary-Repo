#include <stdio.h>

int main() {
    int a = 6, b = 5;
    printf("%d ", a);
    printf("%d ", a++);
    printf("%d\n", ++a);

    printf("%d ", b);
    printf("%d ", b--);
    printf("%d\n", --b);
    
    return 0;
}
