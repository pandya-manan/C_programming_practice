#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
void traverseDoublyLinkedList(struct Node* head);
struct Node* insertAtBeginning(struct Node* head, int value);
struct Node* insertAtIndex(struct Node* head, int value,int index);
struct Node* insertAtEnd(struct Node* head, int value);
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int value);
struct Node* insertBeforeNode(struct Node* head, struct Node* nextNode, int value);

int main()
{
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    //Defining the first node and pointing to the second
    first->data=12;
    first->prev=NULL;
    first->next=second;

    //Defining the second node and pointing to the third
    second->data=13;
    second->prev=first;
    second->next=third;

    //Defining the third node and pointing to the fourth
    third->data=14;
    third->prev=second;
    third->next=fourth;

    //Defining the fourth node and pointing to the end 
    fourth->data=15;
    fourth->prev=third;
    fourth->next=NULL;

    //traversing the doubly linked list
    traverseDoublyLinkedList(first);
    //Adding first node in the beginning
    first=insertAtBeginning(first,16);
    //traversing the doubly linked list
    traverseDoublyLinkedList(first);
    //Adding a node at a particular index
    first=insertAtIndex(first,17,1);
    //traversing the doubly linked list
    traverseDoublyLinkedList(first);
    //Adding a node at the end of the doubly linked list 
    first=insertAtEnd(first,18);
    //traversing the doubly linked list
    traverseDoublyLinkedList(first);
    //Adding a node after the node in a doubly linked list
    first=insertAfterNode(first,second,20);
    //traversing the doubly linked list
    traverseDoublyLinkedList(first);
    //Adding a node before the node in a doubly linked list
    first=insertBeforeNode(first,second,21);
    //traversing the doubly linked list
    traverseDoublyLinkedList(first);

    return 0;
}
void traverseDoublyLinkedList(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
struct Node* insertAtBeginning(struct Node* head, int value)
{
    struct Node* toAdd=(struct Node*)malloc(sizeof(struct Node));
    toAdd->data=value;
    head->prev=toAdd;
    toAdd->prev=NULL;
    toAdd->next=head;
    return toAdd;
}
struct Node* insertAtIndex(struct Node* head, int value, int index)
{
    struct Node* toAdd=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int count=0;
    while(count!=index)
    {
        p=p->next;
        count++;
    }
    toAdd->data=value;
    toAdd->next=p->next;
    p->next=toAdd;
    return head;
}
struct Node* insertAtEnd(struct Node* head, int value)
{
    struct Node* toAdd=(struct Node*)malloc(sizeof(struct Node));
    toAdd->data=value;
    struct Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    toAdd->next=NULL;
    p->next=toAdd;
    return head;
}
struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int value)
{
    struct Node* toAdd=(struct Node*)malloc(sizeof(struct Node));
    toAdd->data=value;
    toAdd->next=prevNode->next;
    prevNode->next=toAdd;
    return head;

}
struct Node* insertBeforeNode(struct Node* head, struct Node* nextNode, int value) {
  if (nextNode == NULL) {
    // Handle the case where nextNode is NULL (avoid undefined behavior)
    return head;
  }

  struct Node* toAdd = (struct Node*)malloc(sizeof(struct Node));
  toAdd->data = value;

  // Check if nextNode is the head node (special case)
  if (nextNode == head) {
    // Insert at the beginning
    toAdd->prev = NULL;
    toAdd->next = head;
    head->prev = toAdd;
    return toAdd; // Update head to point to the new node
  }

  // General case: insert before a non-head node
  toAdd->prev = nextNode->prev;
  nextNode->prev->next = toAdd;
  toAdd->next = nextNode;
  nextNode->prev = toAdd;
  return head;
}