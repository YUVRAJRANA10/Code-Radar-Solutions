// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char cc[100];
    char re,rep;
    fgets(cc, sizeof(cc), stdin);
    scanf("%c",&re);
    scanf("%c",&rep);
char bb[100];
    int counter = 0;
    for (int i = 0; i < strlen(cc); i++) { 
        
        bb[i] == cc[i];
       if(bb == re){ 
        bb[i] == rep;

       }
        }
    

    printf("%s\n",bb );
    return 0;
}
