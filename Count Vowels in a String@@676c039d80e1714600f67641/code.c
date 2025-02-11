#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char cc[100];
    scanf("%s",&cc);
    int counter = 0;
    for(int i = 0;i < sizeof(cc);i++){
        char bb = cc[i];
        if(bb == 'a'  || bb == 'e' || bb == 'i' || bb == 'o' || bb == 'u'){
            counter++;
        }
    }
    printf("%d",counter);
    return 0;
}