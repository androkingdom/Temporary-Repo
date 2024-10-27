#include <stdio.h>

int main() {
    int choice;
    printf("Area Calculator\n");
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice) {
        case 1: {
            float r;
            printf("Enter radius: ");
            scanf("%f", &r);
            printf("Area of Circle: %.2f sq units\n", 3.14 * r * r);
            break;
        }

        case 2: {
            float l, b;
            printf("Enter length: ");
            scanf("%f", &l);
            printf("Enter breadth: ");
            scanf("%f", &b);
            printf("Area of Rectangle: %.2f sq units\n", l * b);
            break;
        }

        case 3: {
            float base, height;
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            printf("Area of Triangle: %.2f sq units\n", 0.5 * base * height);
            break;
        }

        default:
            printf("Something went wrong!!\n");
            break;
    }

    return 0;
}