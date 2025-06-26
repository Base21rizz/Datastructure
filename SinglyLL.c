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
    return 0;
}