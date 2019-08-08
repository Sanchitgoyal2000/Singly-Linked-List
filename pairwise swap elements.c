void pairWiseSwap(struct node *head)
{
  struct node *temp=NULL,*temp1=NULL;
  temp=(struct node*)malloc(sizeof(struct node));
  temp1=(struct node*)malloc(sizeof(struct node));
  temp=head;
  int p;
  while(temp!=NULL && temp->next!=NULL)
  {
      temp1=temp->next;
      p=temp1->data;
      temp1->data=temp->data;
      temp->data=p;
      temp=temp->next->next;
  }
  return head;
}
