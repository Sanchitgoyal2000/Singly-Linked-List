int compare(struct Node*list1,struct Node*list2)
{
    struct Node *temp=NULL,*temp1=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp1=(struct Node*)malloc(sizeof(struct Node));
    int p=0,q=0;
    temp=list1;
    temp1=list2;
    char a,b;
    int h=0;
    while(temp!=NULL&&temp1!=NULL)
    {
        if(temp->c==temp1->c)
        {
            temp=temp->next;
            p++;
            temp1=temp1->next;
            q++;
            h=0;
        }
        else
        {
            h=1;
            a=temp->c;
            b=temp1->c;
            break;
        }
    }
    while(temp!=NULL)
    {
        p++;
        temp=temp->next;
    }
    while(temp1!=NULL)
    {
        q++;
        temp1=temp1->next;
    }
    if(h==0&&p>q)
    return 1;
    else if(h==0&&p<q)
    return -1;
    else if(h==0&&p==q)
    return 0;
    if(a>b)
    return 1;
    else if(a<b)
    return -1;
    else
    return 0;
}
