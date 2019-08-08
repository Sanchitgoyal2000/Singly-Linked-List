Node* reverseList(Node *curr)
{
  if(curr==NULL||curr->next==NULL)
  return curr;
 struct Node *first=NULL;
 struct Node *h=NULL;
 struct Node *second=NULL;
 first=(struct Node *)malloc(sizeof(struct Node));
 second=(struct Node *)malloc(sizeof(struct Node));
 first=curr;
 second=curr->next;
 h=(struct Node *)malloc(sizeof(struct Node));
 h=reverseList(second);
 second->next=curr;
 first->next=NULL;
 return h;
}
