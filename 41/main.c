#include <stdio.h> 

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int pascalElement(int n, int k){
    return factorial(n)/ (factorial(k) * factorial(n-k));
}

int main(){
    for (int i = 0; i < 5; i++){
        for (int space = 0; space < 5-i; space++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            printf("%d ", pascalElement(i, j));
        }  
        printf("\n"); 
    }
       
    return 0;
}