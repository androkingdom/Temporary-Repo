#include <stdio.h> 
#include <ctype.h>

int isVowel(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')? 1 : 0;
}

int main(){
    char c;
    printf("Enter char: ");
    c = getchar();
    getchar();

    if(isVowel(c)){
        printf("%c is vowel", c);
    }else{
        printf("%c is consonant", c);
    }
    
    return 0;
}