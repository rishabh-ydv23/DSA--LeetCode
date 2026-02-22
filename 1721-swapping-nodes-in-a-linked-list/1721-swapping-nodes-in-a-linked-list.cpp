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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        ListNode* first=NULL;
        ListNode* second=NULL;

        while(temp!=NULL){
            n++;
            temp=temp->next;
        }

        int end=n-k+1;
        temp=head;

        int count=1;
        while(temp!=NULL){
            if(count==k){
                first=temp;
            }
            if(count==end){
                second=temp;
            }
            temp=temp->next;
            count++;
        }
        swap(first->val,second->val);
        return head;

    }
};