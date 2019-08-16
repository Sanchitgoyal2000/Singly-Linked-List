int sumOfLastN_Nodes(struct Node* head, int n)
{
 int p=0,res=0,q;
 Node *temp=(struct Node*)malloc(sizeof(struct Node*));
 temp=head;
 while(temp!=NULL)
 {
     p++;
     temp=temp->next;
 }
 q=p-n;
 temp=head;
 p=0;
 while(temp!=NULL)
 {
      p++;
     if(p>q)
     res=res+temp->data;
     temp=temp->next;
 }
 return res;
}
