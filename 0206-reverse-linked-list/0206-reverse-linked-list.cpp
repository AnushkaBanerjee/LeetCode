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
    ListNode* reverseList(ListNode* head) {
        //using recursion
        //for one element
        if(head == nullptr || head->next == nullptr) return head;
        //for more than one elements
        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        head->next = nullptr;
        front->next = head;
        return newHead;
    }
};