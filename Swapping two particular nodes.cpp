/*  input= 1 2 3 4 5
    output=1 2 5 4 3 if we have to swap nodes 5 and 3 */

struct Node* swap(struct Node* head,int a,int b)
{
  struct Node* temp=  (struct Node *)malloc(sizeof(struct Node));
    struct Node* temp2=  (struct Node *)malloc(sizeof(struct Node));
      struct Node* tempf=  (struct Node *)malloc(sizeof(struct Node));
        struct Node* tempff=  (struct Node *)malloc(sizeof(struct Node));
         struct Node* tempfff=  (struct Node *)malloc(sizeof(struct Node));
          struct Node* templ=  (struct Node *)malloc(sizeof(struct Node));
           struct Node* templl=  (struct Node *)malloc(sizeof(struct Node));
             struct Node* templll=  (struct Node *)malloc(sizeof(struct Node));
        temp=head;
        temp2=temp;
        while(temp!=NULL)
        {
         if(temp->data==a)
         {
          tempf=temp2;
          tempff=temp->next;
          tempfff=temp;
         }
         if(temp->data==b)
         {
          templ=temp2;
          templl=temp->next;
          templll=temp;
         }
         temp2=temp;
         temp=temp->next;
        }
        if(tempfff==head)
        {
         if(tempfff->next==templll)
         {
           head=templll;
          templll->next=tempfff;
          tempfff->next=templl;
         }
         else
         {
         head=templll;
         templll->next=tempff;
         templ->next=tempfff;
        tempfff->next=templl;
         }
        }
        else
        {
         if(tempfff->next==templll)
         {
          tempf->next=templll;
          templll->next=tempfff;
          tempfff->next=templl;
         }
         else
         {
        tempf->next=templll;
        templll->next=tempff;
        templ->next=tempfff;
        tempfff->next=templl;
         }
        }
        return head;
}
