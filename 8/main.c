#include <stdio.h> 

int main(){
    int a = 5, b = 6, c = 6;
    // 0 -> false 1 -> true

    printf("%d\n", a == 5);
    printf("%d\n", a >= b);
    printf("%d\n", a <= a);
    printf("%d\n", c == b);
    printf("%d\n", b != a);
    printf("%d\n", a > b);
    printf("%d\n", a < b);

    return 0;
}