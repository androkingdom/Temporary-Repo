#include <stdio.h> 

void change(int* n){
    *n = (*n) * (*n);
}

int main(){
    int n;
    printf("Enter numeber: ");
    scanf("%d", &n);

    printf("Befor change: %d\n", n);
    
    change(&n);
    printf("After change: %d\n", n);

    return 0;
}