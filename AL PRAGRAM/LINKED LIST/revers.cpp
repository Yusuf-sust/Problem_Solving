#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void revrs()
{
    struct node *m, *n, *temp;
    m = start;
    n = m->next;
    temp = n->next;
    m->next = NULL;
    while(n->next != NULL)
    {
        n->next = m;
        m = n;
        n = temp;
        temp = temp->next;
    }
    n->next = m;
    start = n;

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

    revrs();
    display();
}




