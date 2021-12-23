#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void doubl()
{
    struct node *temp;
    temp = start;
    while(temp != NULL)
    {
        struct node *dou;
        dou = (struct node*)malloc(sizeof(struct node));
        dou->data = temp->data;
        dou->next = temp->next;
        temp->next = dou;
        temp = dou->next;
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
    int i, n;
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

    doubl();
    display();
}

