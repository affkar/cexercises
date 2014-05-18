#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>

typedef struct DoublyLinkedNodeStruct{
    struct DoublyLinkedNodeStruct* next;
    struct DoublyLinkedNodeStruct* prev;
    int number;
}DoublyLinkedNode;

extern void printList(DoublyLinkedNode* startNode);
extern DoublyLinkedNode* getNode(int, DoublyLinkedNode*, DoublyLinkedNode*);
extern void addNodeAtLast(DoublyLinkedNode* start, int num);
extern DoublyLinkedNode* getNext(DoublyLinkedNode*);
