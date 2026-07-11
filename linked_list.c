#include <stdio.h>
#include <stdlib.h>

//Node Structure.
struct node {
    int data;
    struct node *next;
};

void main() {
   struct node *temp, *root, *ptr, *p, *t;
   int value, n, location;

   struct node* newNode;
   int newData;

   struct node* newlast;

   struct node* newNodeI;
   //clrscr();

   printf("Enter No. of Nodes: ");
   scanf("%d", &n);
   
   temp = (struct node*)malloc(sizeof(struct node));
   
   printf("Enter 1-Node: ");
   scanf("%d", &value);
   temp->data = value;
   temp->next = NULL;
   root = temp;
   ptr = temp;

   for(int i=2; i<=n; i++) {
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter %d-Node: ", i);
    scanf("%d", &value);
    temp->data = value;
    temp->next = NULL;
    ptr->next = temp;
    ptr = temp;
   }

   ptr = root;
   printf("\nYour linked list:\n");
   while(ptr != NULL) {
    printf("%d -> ", ptr->data);
    ptr = ptr->next;
   }

   printf("\n\nInsert At First: ");
   scanf("%d", &newData);
   
   newNode = (struct node*)malloc(sizeof(struct node));
   
   newNode->data = newData;
   newNode->next = root;

   ptr = newNode;
   printf("\nAfter Insert linked list:\n");
   while(ptr != NULL) {
    printf("%d -> ", ptr->data);
    ptr = ptr->next;
   }

   printf("\n\nInsert At last: ");
   scanf("%d", &newData);
   
   newlast = (struct node*)malloc(sizeof(struct node));
   newlast->data = newData;
   newlast->next = NULL;

   ptr = root;
   //printf("\nAfter Insert linked list:\n");
   while(ptr->next != NULL) {
    ptr = ptr->next;
   }
   
   ptr->next = newlast;

   t = root;
   printf("\nAfter Insert linked list:\n");
   while(t != NULL) {
    printf("%d -> ", t->data);
    t = t->next;
   }

   printf("\nEnter location of New Node: ");
   scanf("%d", &location);

   printf("New Node Data: ");
   scanf("%d", &newData);

   newNodeI = (struct node*)malloc(sizeof(struct node));

   newNode->data = newData;

   if(location == 0) {
    newNodeI->next = root;
    root = newNodeI;
   }
   else {
    temp = root;
    for(int i=0; i < location-1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    newNodeI->next = temp->next;
    temp->next = newNodeI;
   }

   ptr = root;
   printf("\nFinal:\n");
   while(ptr != NULL) {
    temp = temp->next;
    printf("%d ->", ptr->next);
    ptr = ptr->next;
   }
}
