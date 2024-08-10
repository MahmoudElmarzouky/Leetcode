/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head==null)return head;
        ListNode current=head;
        ListNode prev=null;
        while(current!=null&&current.next!=null){
            ListNode temp=current.next;
            if(prev==null){
               current.next=current.next.next;
               temp.next=current;
               current=current.next;
               prev=temp.next;
               head=temp;
            }else {
            current.next=current.next.next;
            prev.next=temp;
            temp.next=current;
            current=current.next;
            prev=temp.next;
            }
        }
        return head;
    }
}