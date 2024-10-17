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
        unordered_map<ListNode*,int>nodeMap;
        ListNode* temp = head;
        while(temp != nullptr){
            if(nodeMap.find(temp) != nodeMap.end()) return temp;
            nodeMap[temp] = 1;
            temp = temp->next;
        }
        return nullptr;
    }
};