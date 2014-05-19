#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
#include "mathplusplus.h"
#include<stdlib.h>

int main(int argc, char** argv){
   
   int n=atoi(argv[1]);
   int i=0;
   for(i=2;i<=n;i++) 
   if(isPrime(i)){
       printf("%d - prime\n", i);
   }else{
       printf("%d - not prime\n", i);
   }
   return 0;
}
