#include <stdio.h> 

int isPerfectNum(int n){
    int sum = 0;

    for (int i = 1; i*i <= n; i++){
        if(n%i==0){
            sum += i;
            if(i != n/i && n/i != n){
                sum += n/i;
            }
        }
    }
    
    return sum == n;
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Enter positive numbers only!\n");
        return -1;
    }

    if(isPerfectNum(num)){
        printf("Number is a perfect\n");
    }else{
        printf("Number is not a perfect\n");
    }

    return 0;
}