#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void sorting()
{
    struct node *temp, *swp, *tt;
    swp = (struct node*)malloc(sizeof(struct node));
    temp = start;
    while(temp != NULL)
    {
        tt = temp->next;
        while(tt != NULL)
        {
            if(temp->data > tt->data)
            {
                swp->data = temp->data;
                temp->data = tt->data;
                tt->data = swp->data;
            }
            tt = tt->next;
        }
        temp = temp->next;
    }

}

void display()
{
    struct node *temp;
    temp = start;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        struct node *new_node, *current;
        new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if(start == NULL)
        {
            start = new_node;
            current = new_node;
        }
        else
        {
            current->next = new_node;
            current = new_node;
        }
    }

    sorting();
    display();
}

