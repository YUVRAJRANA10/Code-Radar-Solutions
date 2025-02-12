// Your code here...// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char cc[100];
    fgets(cc, sizeof(cc), stdin);  

    int counter = 0;
    for (int i = strlen(cc)-1; i >= 0; i--) {
        printf("%c",cc[i]);
    }

    // printf("%d\n", counter);
    return 0;
}
