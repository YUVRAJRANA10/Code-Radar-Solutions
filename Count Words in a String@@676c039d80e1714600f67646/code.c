// Your code here...
// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char cc[100];
    fgets(cc, sizeof(cc), stdin);  

    int counter = 0;
    for (int i = 0; i < strlen(cc); i++) { 
            if(cc[i] == " "){
                counter++;
            }
    }

    printf("%d\n", counter);
    return 0;
}
