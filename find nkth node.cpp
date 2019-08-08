int fractional_node(struct node *head, int k)
{
   struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int p=0;
    while(temp!=NULL)
    {
        p++;
        temp=temp->next;
    }
    if(p%k==0)
    {
        p=p/k;
    }
    else
    p=p/k+1;
    temp=head;
    int i=0;
    while(i<p-1)
    {
        temp=temp->next;
        i++;
    }
    return temp->data;
}
