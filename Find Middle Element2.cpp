int getMiddle(Node *head)
{
   struct Node *slow=NULL;
     slow=(struct Node *)malloc(sizeof(struct Node));
    slow=head;
    int res=0;
    while(head!=NULL && slow!=NULL && slow->next!=NULL)
    {
        head=head->next;
        res=head->data;
        slow=slow->next->next;
    }
    return res;
}
