#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void deletionfromgivenpos(struct node *temp, struct node *head)
{
    struct node *prev,*nextnode;
    int pos,i=1;
    temp = head;
    printf("Enter Position: ");
    scanf("%d",&pos);
    while (i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}
int main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &newnode->data);
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
        printf("Do you want to continue?if not, press 0 else 1: \n");
        scanf("%d", &choice);
    }
    printf("Do you want to delete an element from any position? press 1 if yes else 0: \n");
    int OZ;
    scanf("%d", &OZ);
    if (OZ == 1)
    {
        deletionfromgivenpos(temp, head);
    }
    printf("\nLinked List: ");
    temp = head;
    while (temp != 0)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}