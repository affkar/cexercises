#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>

typedef struct Node{
    struct Node* next;
    struct Node* prev;
    int number;
}NodeType;

void printList(NodeType* startNode);
NodeType* getNode(int, NodeType*, NodeType*);
void addNodeAtLast(NodeType* start, int num);
NodeType* getNext(NodeType*);
main(int argc, char** argv){
   
    NodeType* head=getNode(2,NULL,NULL);
    addNodeAtLast(head, 3);
    addNodeAtLast(head, 5);
    addNodeAtLast(head, 7);
    addNodeAtLast(head, 11);
    addNodeAtLast(head, 13);
    addNodeAtLast(head, 17);
    addNodeAtLast(head, 19);
    printList(head);
}
void addNodeAtLast(NodeType* startNode, int number){
    NodeType* currentNode=startNode;
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
NodeType* getNode(int number, NodeType* prev, NodeType* next){

    NodeType* node=(NodeType*)malloc(sizeof(NodeType));
    node->number=number;
    node->prev=prev;
    node->next=next;
    return node;
}
void printList(NodeType* startNode){
    printf("**************************************************\n");
    printf("printing list at %p\n", startNode);
    printf("**************************************************\n");
    printf("current\tprev\tnext\tnumber\n");
    printf("**************************************************\n");
    NodeType* currentNode=startNode;
    if(currentNode != NULL)
        do{
            printf("%p\t%p\t%p\t%d\n", currentNode, currentNode->prev, currentNode->next, currentNode->number);
        } while((currentNode=getNext(currentNode))!=NULL);
    printf("**************************************************\n");
    printf("done printing list at %p!\n", startNode);
    printf("**************************************************\n");


}

NodeType* getNext(NodeType* node){
    NodeType* currentNode=node;
    if(currentNode != NULL){
        return currentNode->next;
    }
    return NULL;
}
