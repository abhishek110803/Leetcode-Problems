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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
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
            
            int n=count/2;
            cout <<n;
               temp = head;
             while (n!=0)
            {
                
                temp = temp->next;
                n--;
            }

            return temp;

        
    }
};