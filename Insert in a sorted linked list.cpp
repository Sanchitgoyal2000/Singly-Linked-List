void sortedInsert(struct node** head, int k)
{
   struct node *temp=(struct node*)malloc(sizeof(struct node)),*newNode=NULL,*temp1=NULL;
   temp=*head;
   newNode=(struct node*)malloc(sizeof(struct node));
   newNode->data=k;
   if(*head==NULL)
   {
       *head=newNode;
       newNode->next=NULL;
       return;
   }
  if((*head)->data>k)
  {
        temp1=(*head);
          (*head)=newNode;
          newNode->next=temp1;
          return;
  }
  while(temp!=NULL&&temp->next!=NULL)
  {
      if(temp->data<=k&&k<=temp->next->data)
      {
          temp1=temp->next;
          temp->next=newNode;
          newNode->next=temp1;
          return;
      }
      temp=temp->next;
  }
  if(temp->next==NULL)
  {
      temp->next=newNode;
      newNode->next=NULL;
  }
}
// test case when same element is to be inserted present in list
