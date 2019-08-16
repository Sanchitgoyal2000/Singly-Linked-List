Node* addTwoLists(Node* A, Node* B)
{
    int s=0,carry=0;
    struct Node * temp1=NULL,*head=NULL;
    temp1=(struct Node*)malloc(sizeof(struct Node*));
    while(A!=NULL&&B!=NULL)
    {
        s=A->data+B->data;
        s=s+carry;
        if(s>9)
        {
            s=s%10;
            carry=1;
        }
        else
        carry=0;
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->data=s;
        s=0;
        if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
        A=A->next;
        B=B->next;
    }
    while(A!=NULL)
    {
      s=A->data;
        s=s+carry;
        if(s>9)
        {
            s=s%10;
            carry=1;
        }
        else
        carry=0;
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->data=s;
        s=0;
        if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
        A=A->next;
    }
     while(B!=NULL)
    {
      s=B->data;
        s=s+carry;
        if(s>9)
        {
            s=s%10;
            carry=1;
        }
        else
        carry=0;
        struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->data=s;
        s=0;
        if(head==NULL)
        {
            head=temp;
            temp1=head;
        }
        else
        {
            temp1->next=temp;
            temp1=temp;
        }
        B=B->next;
    }
    while(carry!=0)
    {
         struct Node *temp=(struct Node*)malloc(sizeof(struct Node*));
        temp->data=carry;
         temp1->next=temp;
            temp1=temp;
            carry=0;
    }
    temp1->next=NULL;
    return head;
}
