int countNodesinLoop(struct Node *head)
{
    if(head==NULL||head->next==NULL)
    return 0;
     struct Node *slow=(struct Node*)malloc(sizeof(struct Node));
    struct Node *fast=(struct Node*)malloc(sizeof(struct Node));
   slow=head;
   fast=head;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        break;
    }
    if(slow==NULL||fast==NULL||fast->next==NULL)
    return 0;
    int count=0;
  while(true)
  {
      slow=slow->next;
      count++;
      if(slow==fast)
      break;
  }
  return count;
}
