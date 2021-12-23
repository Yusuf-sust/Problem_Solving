#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void bigdelete(int n)
{
    printf("%d\n", n);
    struct node *temp, *value;
    if(start->data == n)
    {
        start = start->next;
        return;
    }
    temp = start;
    while(temp != NULL)
    {
        if(temp->data == n)
        {
            value->next = temp->next;
            return;
        }
        value = temp;
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
    int n, m = -1000000;
    scanf("%d", &n);
    while(n--)
    {
        struct node *new_node, *current;
        new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        if(new_node->data > m)
            m = new_node->data;
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

    bigdelete(m);
    display();
}



