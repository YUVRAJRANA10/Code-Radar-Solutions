// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char cc[100];
    fgets(cc, sizeof(cc), stdin);  
      char cd[100];
    fgets(cd, sizeof(cd), stdin);  

    int counter = 0;
    // for (int i = 0; i < strlen(cc); i++) { 
    //         printf("%c",cc[i]);
    // }
    // printf(" ");
    //   for (int i = 0; i < strlen(cd); i++) { 
    //         printf("%c",cd[i]);
    // }
    strcat(cc,cd);
    printf("%s",cc);
  
    return 0;
}
