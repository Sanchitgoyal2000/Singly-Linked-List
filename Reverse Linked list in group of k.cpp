struct node *reverse (struct node *head, int k)
{
  struct node*temp=NULL,*temp1=NULL,*curr=NULL,*next1=NULL,*prev=NULL,*h=NULL,*last=NULL;
  temp1=(struct node*)malloc(sizeof(struct node));
  temp=(struct node*)malloc(sizeof(struct node));
  last=(struct node*)malloc(sizeof(struct node));
  curr=(struct node*)malloc(sizeof(struct node));
  temp=head;
  last->next=NULL;
  while(temp!=NULL)
  {
      int i=0;
      curr=temp;
      while(curr!=NULL&&i<k)
      {
        next1 = curr->next;
         curr->next = prev;
          prev = curr;
            curr = next1;
            i++;
      }
      if(h==NULL)
      h=prev;
      if(last->next!=NULL)
      last->next->next=prev;
      last->next=temp;
      temp=next1;     // here dont write prev->next as it is pointing to 200 if prev has 300
      prev=NULL;
  }
  return h;
}
