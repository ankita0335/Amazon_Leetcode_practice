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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* first= new ListNode(0);
        first->next= head;
        head= first;
        ListNode* second;
        ListNode* prev;
        ListNode* curr;
        ListNode* front;
        int x;
        while(first->next)
        {
            ListNode* cnt = first;
            int c = 0;
            for (int i = 0; i < k; i++) 
            {
                cnt = cnt->next;
                if (!cnt) break;  // If fewer than k nodes remain, exit the loop
                c++;
            }
            if (c != k) break;
            x= k;
            prev= first;
            second= first->next;
            curr= first->next;
            while(x-- && curr)
            {
                front= curr->next;
                curr->next= prev;
                prev= curr;
                curr= front;
            }
            first->next= prev;
            second->next= curr;
            first= second;
        } 
        return head->next;      
    }
};