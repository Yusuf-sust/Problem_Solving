#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void fl()
{
    struct node *f, *temp;
    f = (struct node*)malloc(sizeof(struct node));
    f->data = start->data;
    temp = start;
    start = temp->next;
    temp = start;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = f;
    f->next = NULL;
    return;
}

void display()
{
    struct node *dis;
    dis = start;
    while(dis != NULL)
    {
        printf("%d ", dis->data);
        dis = dis->next;
    }
    //printf("null\n");
}


int main()
{
    int i;
    for(i = 0; i < 5; i++)
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
    fl();
    display();

    return 0;
}

