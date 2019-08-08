Node* deleteNode(Node *head,int x)
{
   struct Node *temp=head;
   struct Node *curr=NULL;
   curr=(struct Node*)malloc(sizeof(struct Node*));
   int count=0;
   if(x==1)
   {
       temp=head;
       head=head->next;
      free(temp);
       return head;
   }
   while(temp!=NULL&&count<x-1)
   {
       curr=temp;
       temp=temp->next;
       count++;
   }
   curr->next=temp->next;
   free(temp);
   return head;
}
