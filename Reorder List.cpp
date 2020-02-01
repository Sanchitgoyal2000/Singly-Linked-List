
public class Solution
{
    public ListNode reorderList(ListNode A)
    {
        if(A==null||A.next==null)
        return A;
        ListNode slow=A,fast=A,temp=null,temp2=null,temp3=null,temp1=null,temp4=null;
        while(fast!=null&&fast.next!=null)
        {
            temp2=slow;
            slow=slow.next;
            fast=fast.next.next;
        }
       // System.out.println(slow.val);
        temp=slow;
        ListNode prev = null;
        ListNode current = temp;
        ListNode next = null,head=null;
        while (current != null)
        {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        temp2.next=null;
        temp3=A;              //head
        while(A!=null)
        {
           temp=A.next;
           temp4=head;
           A.next=head;
           temp1=head.next;
           head.next=temp;
           A=temp;
           head=temp1;
        }
        if(head!=null)
        {
           // System.out.println(head.val);
            temp4.next=temp1;
            temp1.next=null;
        }
       return temp3;
    }
}
