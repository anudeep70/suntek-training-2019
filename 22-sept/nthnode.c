#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
}*Head=NULL;
struct Node * insertNode(struct Node * h)
{
int data1;
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
scanf("%d",&data1);
h->next=temp;
temp->data=data1;
temp->next=NULL;

return temp;
}
void display(struct Node *h)
{
    struct Node *temp=h;
    while(temp!=NULL)
    {
    printf("->%d",temp->data);
    temp=temp->next;
    }
}
void main()
{
    int n;
    int pos;
scanf("%d",&n);


struct Node *h=(struct Node *)malloc(sizeof(struct Node));
struct Node *temp=h;
h->next=NULL;
scanf("%d",&(h->data));
for(int i=1;i<n;i++)
{
    temp=insertNode(temp);
}
scanf("%d",&pos);
if(pos>n)
{
    printf("-1");
}
else
{
struct Node *temp1=h;
struct Node *temp2=h;
for(int i=0;i<pos-1;i++)
    temp1=temp1->next;
while(temp1->next!=NULL)
{
    temp1=temp1->next;
    temp2=temp2->next;
}
printf("%d",temp2->data);
}
}
