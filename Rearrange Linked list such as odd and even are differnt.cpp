Node *rearrangeEvenOdd(Node *head)
{
     struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
      struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
      struct Node*temp2=(struct Node*)malloc(sizeof(struct Node));
      struct Node *head1=NULL,*head2=NULL;
       temp=head;
      int p=0;
      if(head==NULL)
      return NULL;
      while(temp!=NULL)
      {
          p++;
          if(p%2!=0)
          {
            if(head1==NULL)
            {
                head1=temp;
            }
            else
            {
                temp1->next=temp;//dont make null here ie temp->next=NULL
            }                   ;// as making next of temp null means now w e cant access list
               temp1=temp;
          }
          else
          {
              if(head2==NULL)
            {
                head2=temp;
            }
            else
            {
                temp2->next=temp;
            }
             temp2=temp;
          }
          temp=temp->next;
      }
      temp1->next=NULL;
      temp2->next=NULL;
    temp1->next=head2;
      if(head1!=NULL)
      {
          temp1->next=head2;
          return head1;
      }
      else
      return NULL;
}
