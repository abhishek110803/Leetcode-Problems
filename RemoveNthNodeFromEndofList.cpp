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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

         int count=0;

            if (head == NULL)
            {
                return head ;
            }
            ListNode *temp = head;

            while (temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            


            int m=count-n;
            int p=m;
            cout <<n;
         ListNode *temp1 = NULL;
               temp = head;


             while (m!=0)
            {
                temp1=temp;
                temp = temp->next;
                m--;
            }

if(p!=0){
            temp1->next=temp->next;
            temp->next=NULL;}
            else {head=head->next;}

            return head;
        
    }
};