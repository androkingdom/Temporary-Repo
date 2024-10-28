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

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int terms; float x;
    printf("Enter number of terms and value for x: ");
    scanf("%d %f", &terms, &x);

    for(int i = 0; i < terms; i++){
        double term = Pow(-1,i) * (Pow(x, 2*i)/factorial(2*i));
        printf("Term %d: %.8lf\n", i+1, term);
    }
    return 0;
}