#include<stdio.h>
#include<string.h>
void printtriangle(char*, int);

main(int argc, char** argv){
    printf("argc is %d\n", argc);
    if(argc != 3){
        printf("Usage::\n");
        printf("rightisoscelestriangle <character> <base>\n");
    }
    else{
        printtriangle(argv[1], atoi(argv[2]));
    }
}

void printtriangle(char* ch, int base){
   char c=*ch; 
    int i=1;
    int j=1;
    for(i=1;i<=base;i++){
       for(j=1;j<=i;j++){ 
        printf("%c",c);
       }
       printf("\n"); 
    }

}
