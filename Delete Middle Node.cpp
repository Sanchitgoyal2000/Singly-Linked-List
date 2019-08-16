Node* deleteMid(Node *head)
{
  Node *slow=(struct Node*)malloc(sizeof(struct Node));
  Node *fast=(struct Node*)malloc(sizeof(struct Node));
  Node *temp=(struct Node*)malloc(sizeof(struct Node));
  slow=head;
  fast=head;
  while(slow!=NULL && fast!=NULL && fast->next!=NULL)
  {
      temp=slow;
      slow=slow->next;
      fast=fast->next->next;
  }
  temp->next=slow->next;
  return head;
}
