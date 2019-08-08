class GfG
{
    // Function to remove duplicates from the given linked list
    Node removeDuplicates(Node head)
    {
       ArrayList<Integer>l=new ArrayList<Integer>();
       Node temp=null;
       Node temp1=null;
       temp=head;
       while(temp!=null)
       {
           if(!l.contains(temp.data))
           {
           l.add(temp.data);
           temp1=temp;
           }
           else
           {
               temp1.next=temp.next;
           }
           temp=temp.next;
       }
       return head;
    }
}
