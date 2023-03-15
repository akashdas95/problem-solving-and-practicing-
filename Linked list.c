#include<stdio.h>
#include<stdlib.h>


struct node{
  char value;
  struct node *next;
};

void printLinkedList(struct node *p){
  while(p!= NULL){
    printf("%c\n",p->value);
    p = p->next;
  }

}

int main(){
   //initializing nodes
   struct node *head;
   struct node *one = NULL;
   struct node *two = NULL;
   struct node *three = NULL;

   //allocate memory
   one = malloc(sizeof(struct node));
   two = malloc(sizeof(struct node));
   three = malloc(sizeof(struct node));

   //assign value
   one->value = 'a';
   two->value = 'd';
   three->value = 'g';

   //connect node
   one->next = two;
   two->next = three;
   three->next = NULL;

   //save address of the first node in head
   head = one;

   //print the linked list
   printLinkedList(head);
 return 0;
}
