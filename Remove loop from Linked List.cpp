void removeTheLoop(Node *head)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
    struct Node *temp2=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    temp1=head;
    while(temp!=NULL && temp1!=NULL && temp1->next!=NULL)
    {
        temp=temp->next;
        temp1=temp1->next->next;
        if(temp1==temp)
        break;
    }
    if(temp==NULL || temp1==NULL||temp1->next==NULL)
    return;
    temp=head;
    while(temp!=temp1)
    {
        temp2=temp1;
        temp=temp->next;
        temp1=temp1->next;
        if(temp==temp1)
            break;
    }
    temp2->next=NULL;

}
