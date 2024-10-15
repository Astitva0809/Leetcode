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
    ListNode* deleteDuplicates(ListNode* head) {
         ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
        dummy->next = head;
        ListNode* prev = dummy; // Pointer to track the last distinct node
        ListNode* temp = head;
        
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->val == temp->next->val) {
                int data = temp->val;
                while (temp != nullptr && temp->val == data) {
                    ListNode* del = temp;
                    temp = temp->next;
                    delete del;
                }
                prev->next = temp; // Update the next pointer of the previous distinct node
            } else {
                prev = temp; // Move the previous pointer to the current node
                temp = temp->next; // Move the current pointer to the next node
            }
        }
        
        head = dummy->next; // Update the head of the list
        delete dummy; // Delete the dummy node
        return head;
    }
};