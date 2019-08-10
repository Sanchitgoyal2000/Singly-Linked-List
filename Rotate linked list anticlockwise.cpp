Node* rotate(Node* head, int k)
{
    if(head==NULL||head->next==NULL)
    return head;
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
    int i=0;
    temp=head;
    temp2=head;
    int p=0;
    while(temp!=NULL)
    {
        p++;
        temp=temp->next;
    }
    temp=head;
    if(k>=p)
    {
        k=k%p;
    }
    if(k==0)
    return head;
    while(temp->next!=NULL)  //will not work for k=1 so different condition
    {
        temp=temp->next;
        if(i<k-1)
        temp1=temp;
        i++;
    }
    if(k==1)
    temp1=head;
    temp->next=head;
     head=temp1->next;
    temp1->next=NULL;
    return head;
}
