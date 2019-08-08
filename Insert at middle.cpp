Node* insertInMiddle(Node* head, int x)
{
   /* struct Node *temp=NULL,*temp1=NULL,*newNode=NULL,*temp2=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp1=(struct Node*)malloc(sizeof(struct Node));
    newNode=(struct Node*)malloc(sizeof(struct Node));
    temp2=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    temp1=head;
    while(temp!=NULL && temp1!=NULL && temp1->next!=NULL )
    {
        temp2=temp;
        temp=temp->next;
        temp1=temp1->next->next;
    }

    temp1=temp2->next;
    temp2->next=newNode;
    newNode->data=x;
    newNode->next=temp1;*/
    struct Node *temp=NULL,*temp1=NULL,*newNode=NULL,*temp2=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp1=(struct Node*)malloc(sizeof(struct Node));
    newNode=(struct Node*)malloc(sizeof(struct Node));
    temp2=(struct Node*)malloc(sizeof(struct Node));
    temp=head;
    temp1=head;
    int p=0;
    while(temp!=NULL)
    {
        p++;
        temp=temp->next;
    }
    if(p%2==0)
    p=p/2;
    else
    p=p/2+1;

    int i=0;
    while(i<p-1)
    {
        temp1=temp1->next;
        i++;
    }
    temp2=temp1->next;
    temp1->next=newNode;
    newNode->data=x;
    newNode->next=temp2;
    return head;
}
