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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        for(int x : nums)
        {
            s.insert(x);
        }
        while(head!=NULL && s.find(head->val)!=s.end())
        {
            head=head->next;
        }
        if (!head) return NULL;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        while(t2!=NULL)
        {
            if(s.find(t2->val)!=s.end())
            {
                t1->next = t2->next;
                t2 = t1->next;

            }
            else
            {
                if(t2!=NULL)
                   t2=t2->next;
                if(t1!=NULL)
                    t1=t1->next;
            }
        }
        return head;
    }
};