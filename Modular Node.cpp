int modularNode(Node* head, int k)
{
	int i=1,p=0;
	while(head!=NULL)
	{
	    if(i%k==0)
	    p= head->data;
	    i++;
	    head=head->next;
	}
	if(p==0)
	return -1;
	else
	return p;
}
//A modular node is the last node of the linked list whose Index is divisible by the number K, i.e. i%k==0.
