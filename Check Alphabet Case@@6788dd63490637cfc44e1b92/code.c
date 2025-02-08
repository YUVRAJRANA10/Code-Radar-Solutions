#include <stdio.h>
#include<ctype.h>


int main() {
    char cg;
    scanf("%c",&cg);
    char cj = toupper(cg);
    char cl = tolower(cg);
    
    if(isdigit(cg)){
        printf("Not an alphabet");
    }
    else if(toupper(cg)){
        printf("Uppercase");
    }
    else if(tolower(cg)){
        printf("Lowercase");
    }
  
    return 0;
}