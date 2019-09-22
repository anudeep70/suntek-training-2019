struct Node{
int data;
struct Node * next;
}*Head=NULL;
void insert(int pos,struct Node *ptr)
{
    struct Node *temp=ptr;
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    scanf("%d",&temp->data);
    temp
}
void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        insert(1,Head);
    }
}
