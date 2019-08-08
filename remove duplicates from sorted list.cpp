Node *removeDuplicates(Node *head)
{
 struct Node *temp=NULL;
       temp=(struct Node *)malloc(sizeof(struct Node));
struct Node *temp1=NULL;
       temp1=(struct Node *)malloc(sizeof(struct Node));
       temp=head;
   while(temp!=NULL && temp->next!=NULL)
   {
       temp1=temp;
       temp1=temp1->next;
       if(temp->data==temp1->data)
       {
           temp->next=temp1->next;
       }
       else
       temp=temp->next;
   }
    return head;
}
