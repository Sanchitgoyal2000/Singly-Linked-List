int detectloop(Node *fast)
{
     struct Node *slow=NULL;
     slow=(struct Node *)malloc(sizeof(struct Node));
    slow=fast;
     while (slow!=NULL && fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return 1;
        }
    }
    return 0;
}
