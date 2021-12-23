#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void add_before(int x, int y)
{
    struct node *be, *temp, *add;
    add = (struct node*)malloc(sizeof(struct node));
    add->data = y;
    temp = start;
    if(temp->data == x)
    {
        add->next = start;
        start = add;
        return;
    }
    while(temp != NULL)
    {

        if(temp->data == x)
        {
            be->next = add;
            add->next = temp;
            break;
        }
        be = temp;
        temp = temp->next;
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

    add_before(x,y);
    display();

    return 0;
}

