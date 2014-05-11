#include<stdio.h>
#include<malloc.h>
#include<string.h>
void reverseprint(char*);

main(int argc, char** argv){
    reverseprint((char*)argv[1]);
}


void reverseprint(char* someChars){
    
    char* someChars2=(char*)malloc(sizeof(char) * strlen(someChars));
    int i=0;
    for(i=0;i<strlen(someChars);i++){
        *(someChars2+strlen(someChars)-1-i)=someChars[i];
    }
    *(someChars2+ strlen(someChars))='\0';
    printf("The copied string is %s\n", someChars2);


}

