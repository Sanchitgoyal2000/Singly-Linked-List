/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode solve(ListNode A) {
        ListNode temp=null,temp1=null,temp2=null;
        temp=A;
        temp1=A;
        int h=1;
        while(temp!=null&&temp1!=null&&temp1.next!=null)
        {
            temp=temp.next;
            temp1=temp1.next.next;
            if(temp==temp1)
            {
                h=0;
                break;
            }
        }
        if(h==1)
        return A;

        temp=A;
        while(temp!=temp1)
        {
            temp2=temp1;
            temp=temp.next;
            temp1=temp1.next;
        }
        temp2.next=null;
        return A;
    }
}
