#include <stdio.h> 

float Pow(float a, int b){
    if (b == 0) {
        return 1;
    }
    else if (b < 0) {
        return 1 / (Pow(a, -b));
    }
    return a * Pow(a, b - 1);
}

int main(){
    float base;
    int expo;

    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter expo: ");
    scanf("%d", &expo);

    printf("%.2f^%d = %.2f\n", base, expo, Pow(base, expo));

    return 0;
}