#include<stdio.h>
#include<string.h>

void displayAddresses(char[]);
void displayAddresses2(char*);




main(){
int i=10;
char j='c';
float k=10.0;
char string[]="Hello, World!";
char* string2="Hello, World!";
printf("%d %c %f %s\n", i, j, k, string);
printf("sizeof an int %d, floati %d, char %d, string %d. The size of a pointer %d", sizeof(i), sizeof(k), sizeof(j), sizeof(string), sizeof(&k)); 

printf("The string %s is located at address %p. the length of the string is %d. \n", string, &string, strlen(string));
printf("The String should end at address %p\n", &string[strlen(string)-1]);

displayAddresses(string);
displayAddresses2(string);

//for(i=0;i<strlen(string);i++){
//    printf("at %p we have character %c\n", &string+(sizeof(j)*i),**(&string+(sizeof(j)*i)));
//}


}



void displayAddresses(char string[]){
    int i=0;
    for(i=0;i<strlen(string);i++){
        printf("at %p we have character %c\n", &string[i],string[i]);
    }
}
void displayAddresses2(char* string){
    int i=0;
    for(i=0;i<strlen(string);i++){
        printf("at %p we have character %c\n", string+sizeof(char)*i,*(string+sizeof(char)*i));
    }
}



