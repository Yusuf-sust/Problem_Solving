#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void af()
{
    struct node *m, *n, *temp;
    int x;
    temp = start;
    n = temp;
    while(temp->next != NULL)
    {
        n = temp;
        temp = temp->next;
    }
    x = temp->data;
    n->next = NULL;
    m = (struct node*)malloc(sizeof(struct node));
    m->data = x;
    m->next = start;
    start = m;

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

    af();
    display();
}





