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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = head->next;
        while(even && even->next){
            //link the odd and evens with its odd and even group
            odd->next = odd->next->next;
            even->next = even->next->next;
            //move the odd and even to their next group element for link them further
            odd = odd->next;
            even = even->next;

        }
        odd->next = evenHead;
        return head;
    }
};