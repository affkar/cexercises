#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include<stdbool.h>
#include "mathplusplus.h"
#include "ds.h"
#include<stdlib.h>

int main(int argc, char** argv){
   
    DoublyLinkedNode* head;//getNode(2,NULL,NULL);
    bool nodeInited=false;
   int n=atoi(argv[1]);
   int i=0;
   for(i=2;i<=n;i++) 
   if(isPrime(i)){
       if(nodeInited==false){
           head=getNode(i,NULL,NULL);
           nodeInited=true;
       }else{
            addNodeAtLast(head, i);
       }
   }
        printf("List of prime numbers are as below - \n"); 
        printList(head);
        printf(" ====End====\n"); 
   return 0;
}
