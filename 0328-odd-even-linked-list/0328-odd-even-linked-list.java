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
    public ListNode oddEvenList(ListNode head) {
        ListNode oddNode = null,odd=null;
        ListNode evenNode= null,even=null;
        int i=1;
        if(head==null)return null;

        while(head!=null){
              if(i%2==0){
                  if(even==null){
                      even=head;
                      head=head.next;
                      even.next=null;
                      evenNode=even;
                  }else {
                      even.next=head;
                      head=head.next;
                      even=even.next;
                      even.next=null;
                      even.next=null;
                  }
               }
              else 
              {
               if(odd==null){
                      odd=head;
                      head=head.next;
                      odd.next=null;
                      oddNode=odd;

                  }else {
                      odd.next=head;
                      head=head.next;
                      odd=odd.next;
                      odd.next=null; 
                  }
              }
            i++;
        }
         if(oddNode==null)return evenNode;
         if(evenNode==null)return oddNode;
          odd.next=evenNode;
        return oddNode;
    }
}