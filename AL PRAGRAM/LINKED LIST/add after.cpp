#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void add_after(int x, int y)
{
    struct node *temp, *add;
    add = (struct node*)malloc(sizeof(struct node));
    add->data = y;
    temp = start;
    int f = 1;
    while(temp != NULL)
    {
        if(temp->data == x)
        {
            add->next = temp->next;
            temp->next = add;
            f = 0;
            break;
        }
        temp = temp->next;
    }
    if(f)
    {
        temp = add;
        add->next = NULL;
    }
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

    int x, y;
    scanf("%d %d", &x, &y);
    add_after(x,y);
    display();

    return 0;
}

