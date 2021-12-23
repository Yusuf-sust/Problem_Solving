#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *start = NULL;

void delet(int x, int y)
{
    struct node *temp, *p;
    temp = start;
    while(temp != NULL)
    {
        if(temp->data == x || temp->data == y)
        {
            p->next = temp->next;
        }
        p = temp;
        temp = temp->next;
    }

    return;
}

void display()
{
    struct node *temp;
    temp = start;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return;
}

int main()
{
    int i, n, p, q;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        struct node *new_node, *current;
        new_node = (struct node*)malloc(sizeof(struct node));
        cin>>new_node->data;
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
        if(i == 2) p = new_node->data;
        else if(i == n-1) q = new_node->data;
    }

    delet(p,q);
    display();

    return 0;
}
