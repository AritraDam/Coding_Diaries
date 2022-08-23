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
    bool isPalindrome(ListNode* head) {
        ListNode* first = new ListNode(head->val);
        ListNode* trav = head->next;
        ListNode* temp = first;
        while(trav!=NULL)
        {
            temp->next = new ListNode(trav->val);
            trav=trav->next;
            temp = temp->next;
        }
        ListNode* prev = first;
        ListNode* curr = prev->next;
        prev->next = NULL;
        while(curr!=NULL)
        {
            ListNode* now = curr->next;
            curr->next = prev;
            prev = curr;
            curr = now;
        }
        first = prev;
        while(head!=NULL)
        {
            if(head->val != first->val)
                return false;
            head = head->next;
            first = first->next;
        }
        return true;
    }
};