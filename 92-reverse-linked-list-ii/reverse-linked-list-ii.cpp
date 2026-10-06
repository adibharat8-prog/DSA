/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    // ListNode * reverse(ListNode * head, int len){
    //     ListNode  curr = head;
    //     ListNode * prev = NULL;
    //     while(len--){
    //         ListNode * temp = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = temp;
    //     }
    // }

    ListNode* reverseBetween(ListNode* head, int l, int r) {

        if(head == NULL || head->next == NULL){
            return head;
        }

        int st = 1;
        bool check = false;
        ListNode * p = head;
        int limit = l-1;
        ListNode * curr;

        if(limit != 0){
            while(st != l-1){
                p = p->next;
                st++;
            }

            curr = p->next;
           
        }else{
            curr = p;
            check = true;
        }
        
        
        
        
        // cout<<p->va'l<<endl;
        // cout<<curr->val<<endl;

        ListNode * t = curr;
        int len = r - l + 1;
        ListNode * prev = NULL;
        while(len--){
            ListNode * temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        t->next = curr;
        

        if(!check){
            p->next = prev;
            return head;
        }
        
        // cout<<p->val<<endl;
        // cout<<t->val<<endl;
        // cout<<prev->val<<endl;
        // cout<<curr->val<<endl;

        return prev;
    }
};