#include<malloc.h>
struct Node
{
  int data;
  struct Node *next;
};
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],i;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    struct Node *head=NULL,*temp1=NULL,*temp=NULL;
	    temp=(struct Node*)malloc(sizeof(struct Node));
	    temp1=(struct Node*)malloc(sizeof(struct Node));
	    for(i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	        {
	            if(head==NULL)
	            {
	                head=(struct Node*)malloc(sizeof(struct Node));
	                head->data=a[i];
	                temp=head;
	            }
	            else
	            {
	                temp1=(struct Node*)malloc(sizeof(struct Node));
	                temp1->data=a[i];
	                temp->next=temp1;
	                temp=temp1;
	            }
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]%2!=0)
	        {
	            if(head==NULL)
	            {
	                head=(struct Node*)malloc(sizeof(struct Node));
	                head->data=a[i];
	                temp=head;
	            }
	            else
	            {
	                temp1=(struct Node*)malloc(sizeof(struct Node));
	                temp1->data=a[i];
	                temp->next=temp1;
	                temp=temp1;
	            }
	        }
	    }
	    temp1->next=NULL;
	    while(head!=NULL)
	    {
	        printf("%d ",head->data);
	        head=head->next;
	    }
	    printf("\n");
	}
	return 0;
}
