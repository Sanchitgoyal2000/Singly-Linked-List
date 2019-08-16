
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  unsigned long long int res=0,a=0,b=0;
  while(l1!=NULL)
  {
      a=(a*10+l1->data)%1000000007;
      l1=l1->next;
  }
    while(l2!=NULL)
  {
      b=(b*10+l2->data)%1000000007;
      l2=l2->next;
  }
  return (a*b)%1000000007;
}
/* at each step take modulo bcz unsigned long long int cannot store big numbers*/
