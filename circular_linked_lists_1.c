#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void traverseLinkedList(struct Node* ptr);
struct Node* insertAtFirst(struct Node* ptr,int value)
{
    struct Node* toAdd=(struct Node*)malloc(sizeof(struct Node));
    toAdd->data=value;
    struct Node* p=ptr->next;
    while(p->next!=ptr)
    {
        p=p->next;
    }
    p->next=toAdd;
    toAdd->next=ptr;
    ptr=toAdd;
    return ptr;

}
int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=4;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=6;
    third->next=fourth;
    fourth->data=7;
    fourth->next=head;
    traverseLinkedList(head);
    head=insertAtFirst(head,53);
    traverseLinkedList(head);
    return 0;

}

void traverseLinkedList(struct Node* ptr)
{
   struct Node* temp=ptr;
   if(temp!=NULL)
   {
    do
    {
       printf("%d ",temp->data);
       temp=temp->next;
    } while (temp!=ptr);
    
   }
   printf("\n");
}
