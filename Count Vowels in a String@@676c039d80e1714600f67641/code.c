#include <stdio.h>
#include <string.h>

int main() {
    char cc[100];
    fgets(cc, sizeof(cc), stdin);  

    int counter = 0;
    for (int i = 0; i < strlen(cc); i++) { 
        char bb = cc[i];
        if (bb == 'a' || bb == 'e' || bb == 'i' || bb == 'o' || bb == 'u' ||
            bb == 'A' || bb == 'E' || bb == 'I' || bb == 'O' || bb == 'U') {
            counter++;
        }
    }

    printf("%d\n", counter);
    return 0;
}
