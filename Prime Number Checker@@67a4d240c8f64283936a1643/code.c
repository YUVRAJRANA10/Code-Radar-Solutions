#include <stdio.h>

int isPrime(int n){
    if(n<=1) return 0;
    if (n == 2 ) return 1;
 for (int i = 1; i < n; i++ ){
    if(n % i == 0){
        return 0;
    }
}
return 1;
}

int main() {
   int t,num;
   scanf("%d",&t);
   while(t--){
     scanf("%d",&num);
     printf("%d\n",isPrime(num)); 
   }
    return 0;
}