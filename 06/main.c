#include <stdio.h> 

int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area of circle is %f\n", 3.14*r*r);
    printf("Circumfrenece of circle is %f\n", 2*3.14*r);
    
    return 0;
}