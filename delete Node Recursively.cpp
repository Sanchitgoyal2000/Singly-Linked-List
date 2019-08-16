struct Node* recursivedelete(struct Node *head,int p)
{
  if(p<1)
   return head;

  if(p==1)
  {
  struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
   temp1=head->next;
   free(head);
   return temp1;
  }
  head->next=recursivedelete(head->next,p-1);
  return head;
}
