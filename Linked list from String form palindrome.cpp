#include<cstring>
bool Compute(Node* root)
{
   string s="";
   while(root!=NULL)
   {
       s.append(root->data);
       root=root->next;
   }
   string s1=s;
   reverse(s.begin(),s.end());
   if(s==s1)
   return 1;
   return 0;
}
