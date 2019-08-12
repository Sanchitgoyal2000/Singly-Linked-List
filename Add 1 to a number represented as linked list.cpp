Node *addOne(Node *head)
{
   unsigned long long int s=0;
   struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
   temp=head;
   while(temp!=NULL)
   {
       s=s*10+temp->data;
       temp=temp->next;
   }
   //cout<<s;
   s=s+1;
   struct Node *temp1=NULL,*head1=NULL;
   struct Node *temp2=(struct Node*)malloc(sizeof(struct Node));
   temp=head;
   while(s!=0)
   {
       int b=s%10;
       temp1=(struct Node*)malloc(sizeof(struct Node));
       temp1->data=b;
       temp2=head1;
       head1=temp1;
       head1->next=temp2;
       s=s/10;
   }
   return head1;
}
