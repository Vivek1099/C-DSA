/*
    -Linked List-> collection of elements(non-consecutive).
    -Node has two parts data and address.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//Declaration of a node
struct node
{
    int data;
    struct node *next;
};


//Creating a node
struct node* create(struct node *new_node,int element)
{
    if(new_node==NULL)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=element;
        new_node->next=NULL;
    }
    else
    new_node->next=create(new_node->next,element);

return new_node;
}

//Traversing a node
void Traverse(struct node *x)
{
    printf("\n The list is \t");
    while(x!=NULL)
    {
        printf("\t%d",x->data);
        x=x->next;
    }
}

//Find the length of the LinkedList
void getlength(struct node *head)
{
    struct node *temp;
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("Length of the List is %d",count);
}

//Insert at the beginning
void insertatbeg(struct node **x,int element)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=element;
    new_node->next=*x;
    *x=new_node;
}

//Insert at the end
void insertatend(struct node *x, int element)
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    while(x->next!=NULL)
    {
        x=x->next;
    }
    x->next=new_node;
    new_node->data=element;
    new_node->next=NULL;
}

//Insert at any point
void insertatany(struct node *x, int key, int element)
{
    struct node *new_node;
    int c;
    new_node=(struct node*)malloc(sizeof(struct node));
    while((x->next!=NULL) && (x->data!=key))
    {
        x=x->next;
    }
    new_node->next=x->next;
    new_node->data=element;
    x->next=new_node;
}

//Delete from beginning
void deletefrombegining(struct node *x)
{
    if(x==NULL)
    {
        printf("\nThe list is empty");
    }
    else
    {
     struct node *temp;
     temp=x;
     x=x->next;
     free(temp);
    }
}

//Delete from end
void deletefromend(struct node *x)
{
    struct node *temp,*prev;
    temp=x;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==x)
    {
        x=0;
    }
    else
    {
        prev->next=0;
    }
    free(temp);
}


//Main part
int main()
{
    int val,ch,num=0,k;
    struct node *head=NULL;

    printf("\n 1. Create ");
    printf("\n 2. Insert at beginning ");
    printf("\n 3. Insert at end ");
    printf("\n 4. Insert at any specific location ");
    printf("\n 5. Length of the List ");
    printf("\n 6. Deletion at beginning ");
    printf("\n 7. Deletion at end ");
    printf("\n 8. Traverse ");
    printf("\n 9. Exit ");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1 : printf("\nEnter the element you want to put on tht node: ");
                     scanf("%d",&val);
                     head=create(head,val);
                     break;

            case 2 : printf("\nEnter the element: ");
                     scanf("%d",&val);
                     insertatbeg(&head,val);
                     break;

            case 3 : printf("\nEnter the element: ");
                     scanf("%d",&val);
                     insertatend(head,val);
                     break;

            case 4 : printf("\nEnter the element: ");
                     sacnf("%d",&val);
                     printf("\nEnter the key element after which you want to insert: ");
                     scanf("%d",&k);
                     insertatany(head,k,val);
                     break;

            case 5 : getlength(head);
                     break;

            case 6 : deletefrombegining(head);
                     break;

            case 7 : deletefromend(head);
                     break;

            case 8 : Traverse(head);
                     break;
                
            case 9 : exit(0);
        }
    }
    while(num==0);
    return 0;
}