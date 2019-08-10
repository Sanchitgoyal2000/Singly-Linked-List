bool isPalindrome(Node *head)
{
    if(head==NULL)
    return 1;
    struct Node *temp3=NULL,*temp1=NULL,*temp4=NULL,*temp=NULL,*temp2=NULL,*slow=NULL,*fast=NULL,*prev=NULL,*next1=NULL;
   temp=(struct Node*)malloc(sizeof(struct Node));
   slow=(struct Node*)malloc(sizeof(struct Node));
   fast=(struct Node*)malloc(sizeof(struct Node));
   temp1=(struct Node*)malloc(sizeof(struct Node));
   temp=(struct Node*)malloc(sizeof(struct Node));
   temp2=(struct Node*)malloc(sizeof(struct Node));
   slow=head;
   fast=head;
   while(slow!=NULL&&fast!=NULL && fast->next!=NULL)
   {
        temp1=slow;
       slow=slow->next;
       fast=fast->next->next;
   }
   temp=slow;      //400
   while(slow!=NULL)
   {
       next1=slow->next;
       slow->next=prev;
       prev=slow;
       slow=next1;
   }
   temp1->next=prev; // to join reverse of list
   temp4=temp1->next;
   temp2=head;

   while(temp2!=temp4)
   {
       if(temp2->data==temp1->next->data)
       {
           temp2=temp2->next;
           temp1=temp1->next;
       }
       else
       return 0;
   }
   return 1;
}
