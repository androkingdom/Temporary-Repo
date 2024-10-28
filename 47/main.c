#include <stdio.h> 
#include <ctype.h>

void toggleCase(char* c){
    if(isupper(*c)){
        *c = tolower(*c);
    }else{
        *c = toupper(*c);
    }
}

int main(){
    char c;
    printf("Enter Character: ");
    c = getchar();

    printf("Before toggle: %c, ASCII Code: %d\n", c, c);
    toggleCase(&c);
    printf("After toggle: %c, ASCII Code: %d\n", c, c);
    return 0;
}