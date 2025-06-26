#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head = 0;
    int choice;
    while(choice)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue?if not, press 0 else 1 \n");
        scanf("%d",&choice);
    }
    printf("Do you want to insert at a given position?if not press 0 else 1 \n");
    int x;
    scanf("%d",&x);
    if (x == 1)
    {
        int position,data;
        printf("Enter position to insert at: ");
        scanf("%d",&position);
        printf("Enter the data to insert: ");
        scanf("%d",&data);
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = data;
        if(position == 1)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            temp = head;
            for (int i = 1; i < position-1 && temp != 0; i++)
            {
                temp = temp->next;
            }
            if (temp!=0)
            {
                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
    }
    return 0;
}
