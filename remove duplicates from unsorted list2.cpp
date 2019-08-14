Node *removeDuplicates(Node *root)
{
  struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
  struct Node*temp1=(struct Node*)malloc(sizeof(struct Node));
  struct Node*temp2=(struct Node*)malloc(sizeof(struct Node));
  struct Node*temp3=(struct Node*)malloc(sizeof(struct Node));
  temp=root;
  while(temp!=NULL)
  {
      temp1=temp->next;
      temp3=temp;
      while(temp1!=NULL)
      {
          if(temp->data==temp1->data)
          {
              temp2=temp1->next;
              temp3->next=temp2;
              temp1=temp->next;
              continue;
          }
          temp3=temp1;
          temp1=temp1->next;
      }
      temp=temp->next;
  }
  return root;
}
