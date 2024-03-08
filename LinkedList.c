#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
void traverseLinkedList(struct Node* ptr);
void searchForElement(struct Node* ptr,int value);
struct Node* insertAtFirst(struct Node* head, int value)
{
    struct Node* insertNode=(struct Node*)malloc(sizeof(struct Node));
    insertNode->next=head;
    insertNode->data=value;
    return insertNode;
}
struct Node* insertAtIndex(struct Node* head, int value, int index)
{
    struct Node* insertNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index)
    {
        p=p->next;
        i++;
    }
    insertNode->data=value;
    insertNode->next=p->next;
    p->next=insertNode;
    return head;
}
struct Node* insertAtEnd(struct Node* head,int value)
{
    struct Node* insertNode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    insertNode->data=value;
    ptr->next=insertNode;
    insertNode->next=NULL;
    return head;
    
}

struct Node* insertAfterNode(struct Node* head, struct Node* prevNode, int value)
{
    struct Node* insertNode=(struct Node*)malloc(sizeof(struct Node));
    insertNode->data=value;
    insertNode->next=prevNode->next;
    prevNode->next=insertNode;
    return head;

}

struct Node* insertBeforeNode(struct Node* head, struct Node* prevNode, struct Node* nextNode, int value)
{
    struct Node* insertNode=(struct Node*)malloc(sizeof(struct Node));
    insertNode->data=value;
    prevNode->next=insertNode;
    insertNode->next=nextNode;
    return head;

}

struct Node* deleteAtBeginning(struct Node* head)
{
    struct Node* ptr=head;
    head=ptr->next;
    free(ptr);
    return head;
}

struct Node* deleteNodeInBetween(struct Node* head, int index)
{
    struct Node* ptr=head;
    int i=0;
    while(i!=index)
    {
        ptr=ptr->next;
        i++;
    }
    struct Node* q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;
}

struct Node* deleteLastNode(struct Node* head)
{
   struct Node *ptr = head;
   struct Node *q = NULL;
    while(ptr->next)
    {
        q = ptr;
        ptr = ptr->next;
    }
    q->next = NULL;
    
    free(ptr); 
    return head;
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
    //Defining first node and linking with second
    head->data=7;
    head->next=second;
    //Defining second node and linking with third
    second->data=8;
    second->next=third;
    //Defining the third node and linking with fourth
    third->data=9;
    third->next=fourth;
    //Defining the fourth and last node
    fourth->data=10;
    fourth->next=NULL;
     

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Inserting node at the beginning of the linked list
    head=insertAtFirst(head,12);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Inserting node in between of the linked list
    head=insertAtIndex(head,25,1);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Inserting node in the end of the linked list
    head=insertAtEnd(head,58);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Inserting node after second node in the linked list
    head=insertAfterNode(head,second,65);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Inserting node after third node in the linked list
    head=insertAfterNode(head,fourth,24);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Delete a node at the beginning
    head=deleteAtBeginning(head);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    head=deleteNodeInBetween(head,2);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);
    //Deleting the last node from the linked list
    head=deleteLastNode(head);
    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Adding a new node before a node (passing previous and next node)
    head=insertBeforeNode(head,second,third,100);

    //Accessing the LinkedList Elements from the head node
    traverseLinkedList(head);

    //Searching for element 100 in the linked list (positive case)
    searchForElement(head,100);

    //Searching for element 63 in the linked list (negative case)
    searchForElement(head,63);

    return 0;


}
void traverseLinkedList(struct Node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void searchForElement(struct Node* ptr,int value)
{
    int index=0;
    int flag=-1;
    while(ptr!=NULL)
    {
        if(ptr->data==value)
        {
            
            flag=1;
            break;
        }
        else
        {
            ptr=ptr->next;
            index++;
        }
        
        
    }
    if(flag==-1)
    {
        printf("Element %d not found in the linked list \n",value);
    }
    else
    {
        printf("Element %d found in the linked list at position %d \n",value,index);
    }
}
