#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next, *be;
}*start = NULL;

void delet(int x)
{
    struct node *temp, *be;
    temp = start;
    if(temp->data == x){
        start = temp->next;
        return;
    }
    while(temp != NULL)
    {

        if(temp->data == x)
        {
            be->next = temp->next;
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
    int x;
    scanf("%d", &x);

    delet(x);
    display();

    return 0;
}


