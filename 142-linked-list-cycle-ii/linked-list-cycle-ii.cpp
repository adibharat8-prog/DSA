/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;

        //Initial check
        if(head == NULL || head->next == NULL) return NULL;

        //Cycle detection
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next; 
            if(slow==fast){
                break;
            }
        }

        //If while ends because fast raches NULL
        if(fast == NULL || fast->next == NULL){
            return NULL;
        }

        //Cycle exists
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};