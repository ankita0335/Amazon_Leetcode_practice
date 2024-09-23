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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first = new ListNode(0);
        first->next = head;
        head= first;
        ListNode* front, *second, *curr , * prev;
        
        while(first->next)
        {
            int x=2;
            prev= first;
            second = first->next;
            curr= first->next;
            while(x-- && curr)
            {
                front= curr->next;
                curr->next= prev;
                prev= curr;
                curr= front;
            }
            first->next = prev;
            second->next = curr;
            first= second;
        }
        return head->next;
    }
};