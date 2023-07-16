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

        ListNode*temp1=head;
        ListNode*temp2=head;
        int count=0;
        while(temp1!=NULL){
            temp1=temp1->next;
            count++;
        }

        cout<<"count"<<count<<endl;

        temp1=head;

        int count1=1;
        while(count1!=k){
            temp1=temp1->next;
            count1++;
        }
        int p=count-k+1;
        cout<<"p"<<p<<endl;
        while(p!=1){
            temp2=temp2->next;
            p--;
        }

        int tempo=temp1->val;
        temp1->val=temp2->val;
        temp2->val=tempo;

        return head;

        
    }
};