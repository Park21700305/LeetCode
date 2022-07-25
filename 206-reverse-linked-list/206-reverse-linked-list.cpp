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
ListNode *previous_pointer = NULL;
ListNode *current_pointer = head;
ListNode *next_pointer;

while (current_pointer != NULL)
{
    next_pointer = current_pointer->next;
    current_pointer->next = previous_pointer;

    previous_pointer = current_pointer;
    current_pointer = next_pointer;
}

return previous_pointer;
}
};