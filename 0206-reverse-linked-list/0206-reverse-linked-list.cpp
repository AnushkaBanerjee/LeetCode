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
        //if no elements or only one element is present in the linked list
        if(head == nullptr||head->next == nullptr)return head;
        //for multiple elements
        ListNode* prev = nullptr;//initialise a prev pointer as null
        ListNode* front = nullptr;//initialise a front pointer as null
        ListNode* temp = head;//point temp to head
        while(temp!=nullptr){//while the list is having nodes
            front = temp->next;//store the temp->next in front
            temp->next = prev;//point temp->next to prev pointer
            prev = temp;//shift prev to temp
            temp = front;//shift temp to front(temp->next (previously))
        }
        return prev;
    }
};