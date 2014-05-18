#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
#include "mathplusplus.h"

bool isPrime(int number){
    printf("library isPrimeNaive implementation\n");
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

