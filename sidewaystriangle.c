#include<stdio.h>
#include<string.h>
#include<malloc.h>

void printSideWayTriangle(char*, int);
void printLineOfChars(char *, int);
main(int argc, char** argv){

    printf("argc is %d\n", argc);
    if(argc != 3){
        printf("Usage::\n");
        printf("sidewaystriangle <character> <base>\n");
    }
    else{
        printSideWayTriangle(argv[1], atoi(argv[2]));
    }

}


void printSideWayTriangle(char* ch, int base){
    int i=1;
    for(i=1;i<=base;i++){
        printLineOfChars(ch,i);
    }
    for(i=base-1;i>=1;i--){
        printLineOfChars(ch,i);
    }

}

void printLineOfChars(char * ch, int nooftimes){
   char c=*ch; 
    int j=1;
       for(j=1;j<=nooftimes;j++){ 
        printf("%c",c);
       }
       printf("\n"); 
}

