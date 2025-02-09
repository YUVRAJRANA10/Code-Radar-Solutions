#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int isPrime(int n){
if (n){
    return 1;
}
else{
    return 0;
}

}

int main() {
   int t;
   scanf("%d",&t);
   while(t--){
     int num;
     scanf("%d",&num);
     printf("%d\n",isPrime(num)); 
   }
    return 0;
}