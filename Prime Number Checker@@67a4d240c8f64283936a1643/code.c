#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int isPrime(int n){
if (n){

}
else{
    return 0;
}

}

int main() {
   int t;
   scanf("%d",&t);
   while(t != 0){
     int num;
     scanf("%d",&num);
     printf("%d\n",isPrime(num));
     t--;
   }
    return 0;
}