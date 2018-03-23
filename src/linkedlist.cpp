//Linked list 

//rotate double linked list 


#include "datatypes.hpp"


void rotateDouleLinikedList(DListNode **head, int num){

    DListNode *node = *head;int size=0;
    while(node->next != nullptr){
        node= node->next;
        size+=1;
        }
    DListNode* end = node;

    if(num > size);
        num = num % size;
    //rotate; 
    DListNode *start = *head;
    while(num!=0){
        DListNode *temp = head->next;
        end->next = head;
        head->prev = end;
        end = head;
        head = temp;
        head->prev = nullptr;
        n-=1;
    }


}