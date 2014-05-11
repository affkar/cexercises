#include<stdio.h>
#include<string.h>
#include<malloc.h>

void printdiamond(char*, int);
void printtriangle(char*, int);
void printinvertedtriangle(char*, int);
void printpaddedline(char *, int, int, char *);
main(int argc, char** argv){
    printf("argc is %d\n", argc);
    if(argc != 4){
        printf("Usage::\n");
        printf("rightsideuptriangle <character> <base>\n");
    }
    else{
        printtriangle(argv[1], atoi(argv[2]));
        //printinvertedtriangle(argv[1], atoi(argv[2]));
        //printdiamond(argv[1], atoi(argv[2]));
    }
}

void printdiamond(char* ch, int height){
        printtriangle(ch, height);
        printinvertedtriangle(ch, height);
}

void printinvertedtriangle(char* ch, int height){
    
   char c=*ch;
   char pad=' ';
   int base= 2 * height - 1;
    int i=1;
    int j=1;
    for(i=height;i>0;i--){
       printpaddedline(ch,base,i,&pad);
       printf("\n"); 
    }

}
void printtriangle(char* ch, int height){
   char c=*ch;
   char pad=' ';
   int base= 2 * height - 1;
    int i=1;
    int j=1;
    for(i=1;i<=height;i++){
       printpaddedline(ch,base,i,&pad);
       printf("\n"); 
    }
}


void printpaddedline(char* ch, int totallength, int noofchars, char* paddedchar){
        int i=1;
        int j=1;
        int prefuntilindex=totallength/2-(noofchars-1);
        int sufafterindex=totallength/2+noofchars+1;
       for(j=1;j<=totallength;j++){ 
            if((j <= prefuntilindex) || (j >= sufafterindex) )
                printf("%c",*paddedchar);
            else
                printf("%c",*ch);
       }
    
}

