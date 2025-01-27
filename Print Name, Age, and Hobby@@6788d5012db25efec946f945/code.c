#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int age;
    char name[100];
    char passion[100];
    scanf("%s %d %s",&name,&age,&passion);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",passion);
    return 0;
}