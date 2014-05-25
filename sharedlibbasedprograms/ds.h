#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>

typedef struct DoublyLinkedNodeStruct{
    struct DoublyLinkedNodeStruct* next;
    struct DoublyLinkedNodeStruct* prev;
    int number;
}DoublyLinkedNode;
typedef struct LinkedNodeStruct{
    struct DoublyLinkedNodeStruct* next;
    struct DoublyLinkedNodeStruct* prev;
    int number;
}LinkedNode;

extern void printList(DoublyLinkedNode* startNode);
extern DoublyLinkedNode* getNode(int, DoublyLinkedNode*, DoublyLinkedNode*);
extern void addNodeAtLast(DoublyLinkedNode* start, int num);
extern DoublyLinkedNode* getNext(DoublyLinkedNode*);

extern void printLinkedList(DoublyLinkedNode* startNode);
extern LinkedNode* getLinkedNode(int, LinkedNode*, LinkedNode*);
extern void addLinkedNodeAtLast(LinkedNode* start, int num);
extern LinkedNode* getNextLinkedNode(LinkedNode*);
