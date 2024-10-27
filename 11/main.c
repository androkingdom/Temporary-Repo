#include <stdio.h>

int main() {
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    // Bitwise AND
    printf("a & b = %d\n", a & b); // 1 (0001)

    // Bitwise OR
    printf("a | b = %d\n", a | b); // 7 (0111)

    // Bitwise XOR
    printf("a ^ b = %d\n", a ^ b); // 6 (0110)

    // Bitwise NOT
    printf("~a = %d\n", ~a); // -6 (in binary: 1111...1010)

    // Left Shift
    printf("a << 1 = %d\n", a << 1); // 10 (1010)

    // Right Shift
    printf("a >> 1 = %d\n", a >> 1); // 2 (0010)

    return 0;
}
