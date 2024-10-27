#include <stdio.h> 

// Function prototype to check if a year is a leap year
int isLeapYear(int year);

// Function to determine if a given year is a leap year
int isLeapYear(int year) {
    // Leap year conditions:
    // 1. Divisible by 4
    // 2. Not divisible by 100 unless also divisible by 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 1 : 0;
}

int main() {
    int year; // Variable to store the user-input year
    
    printf("Enter year: "); // Prompt for input
    scanf("%d", &year); // Read the year

    // Check if the year is a leap year
    if(isLeapYear(year)) {
        printf("%d is a leap year\n", year); // Output if leap year
    } else {
        printf("%d is not a leap year\n", year); // Output if not leap year
    }
    
    return 0; // Successful termination
}
