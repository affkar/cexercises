#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
#include "mathplusplus.h"
#include<stdlib.h>
/*bool isPrime(int);
bool isPrimeFast(int number);*/

int main(int argc, char** argv){
   if(isPrime(atoi(argv[1]))){
       printf("prime\n");
   }else{
       printf("not prime\n");
   }
   /**if(isPrimeFast(atoi(argv[1]))){
       printf("prime\n");
   }else{
       printf("not prime\n");
   }*/
   return 0;
}
/**bool isPrime(int number){
    bool isPrime=true;
    int maxdivide=number/2;
    int j=0;
    for(j=2;j<=maxdivide;j++){
        if((number % j) == 0){
            isPrime=false;
            break;
        }
        continue;
    }
    return isPrime;
}

bool isPrimeFast(int number){

    bool isPrime=true;
    int maxdivide=sqrt(number);
    int j=0;
    for(j=2;j<=maxdivide;j++){
        if((number % j) == 0){
            isPrime=false;
            break;
        }
        continue;
    }
    return isPrime;

}*/
