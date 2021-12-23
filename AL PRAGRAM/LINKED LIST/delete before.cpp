#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*start = NULL;

void delete_before(int x)
{
    struct node *before, *temp, *t;
    temp = start;
    t = temp->next;
    int i = 0;
    while(t != NULL)
    {
        if(t->data == x)
        {
            if(i == 0)
            {
                start = t;
                temp = NULL;
                return;
            }
            else{
                before->next = t;
                temp = NULL;
                return;
            }
        }
        else{
            before = temp;
            temp = t;
            t = t->next;
            i++;
        }
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

    delete_before(x);
    display();

    return 0;
}


