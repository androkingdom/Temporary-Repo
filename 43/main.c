#include <stdio.h> 

int hasWhSp(char c){
    return (c == ' ' || c == '\n' || c == '\t');
}

int main(){
    printf("Enter character: ");
    char c = getchar();

    if(hasWhSp(c)){
        printf("Has whitespace\n");
    }else{
        printf("Does not has whitespace\n");
    }
    return 0;
}