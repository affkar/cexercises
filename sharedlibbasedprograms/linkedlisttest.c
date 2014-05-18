#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>
#include "ds.h"

int main(int argc, char** argv){
   
    DoublyLinkedNode* head=getNode(2,NULL,NULL);
    addNodeAtLast(head, 3);
    addNodeAtLast(head, 5);
    addNodeAtLast(head, 7);
    addNodeAtLast(head, 11);
    addNodeAtLast(head, 13);
    addNodeAtLast(head, 17);
    addNodeAtLast(head, 19);
    printList(head);
    return 0;
}
