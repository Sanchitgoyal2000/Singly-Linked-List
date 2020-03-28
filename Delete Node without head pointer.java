void deleteNode(Node node)
    {
        Node temp=null;
        int h=1;
         while(node.next!=null)
         {
             h=0;
             Node p=node.next;
             node.data=p.data;
             temp=node;
             node=node.next;
         }
         if(h==0)
         temp.next=null;
    }


Can't delete last node in this technique