#include<stdio.h>
#include<string.h>


void printmultiplicationtables(int, int);


main(int argc, char** argv){
    //printf("argc is %d\n", argc);
    if(argc != 3){
        printf("Usage::\n");
        printf("multiplication <tableno> <count>\n");
    }
    else{
        int tableno=atoi(argv[1]);
        int count=atoi(argv[2]);
        //printf("tableno is %d count is %d\n", tableno, count);
        
        printmultiplicationtables(tableno,count);
    }
}

void printmultiplicationtables(int tableno, int count){
    printf("************************************\n"); 
    int i=1;
    for(i=1;i<=count;i++){

        printf("%2d X %2d = %3d\n", tableno, i, tableno*i);

    }
    printf("************************************\n");
}

