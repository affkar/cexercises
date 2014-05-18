#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include "ds.h"

void addNodeAtLast(DoublyLinkedNode* startNode, int number){
    DoublyLinkedNode* currentNode=startNode;
    if(startNode ==NULL){
       return; 
    }
    while(currentNode != NULL){
        if(currentNode->next != NULL)
            currentNode=currentNode->next;
        else{
            currentNode->next=getNode(number,currentNode,NULL);
            break;
        }
    }
}
DoublyLinkedNode* getNode(int number, DoublyLinkedNode* prev, DoublyLinkedNode* next){

    DoublyLinkedNode* node=(DoublyLinkedNode*)malloc(sizeof(DoublyLinkedNode));
    node->number=number;
    node->prev=prev;
    node->next=next;
    return node;
}
void printList(DoublyLinkedNode* startNode){
    printf("**************************************************\n");
    printf("printing list at %p\n", startNode);
    printf("**************************************************\n");
    printf("current\tprev\tnext\tnumber\n");
    printf("**************************************************\n");
    DoublyLinkedNode* currentNode=startNode;
    if(currentNode != NULL)
        do{
            printf("%p\t%p\t%p\t%d\n", currentNode, currentNode->prev, currentNode->next, currentNode->number);
        } while((currentNode=getNext(currentNode))!=NULL);
    printf("**************************************************\n");
    printf("done printing list at %p!\n", startNode);
    printf("**************************************************\n");


}

DoublyLinkedNode* getNext(DoublyLinkedNode* node){
    DoublyLinkedNode* currentNode=node;
    if(currentNode != NULL){
        return currentNode->next;
    }
    return NULL;
}
