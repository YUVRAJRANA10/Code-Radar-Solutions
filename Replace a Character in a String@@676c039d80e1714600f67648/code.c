// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char cc[100];
    char re,rep;
    fgets(cc, sizeof(cc), stdin);
    scanf("%c",&re);
    scanf("%c",&rep);

    int counter = 0;
    for (int i = 0; i < strlen(cc); i++) { 
        char bb = cc[i];
       if(bb == re){ 
        cc == rep;

       }
        }
    

    printf("%s\n", cc);
    return 0;
}
