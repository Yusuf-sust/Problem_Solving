#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *start = NULL;

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
    int n, i;
    cin>>n;
    for(i = 0; i < n; i++)
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
        else{
            current->next = new_node;
            current = new_node;
        }
    }

    display();

    return 0;
}
