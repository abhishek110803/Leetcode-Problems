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
    ListNode *removeElements(ListNode *head, int val)
    {

        if (head == NULL)
        {

            return head;
        }
        ListNode *temp1 = NULL;
        ListNode *temp2 = NULL;
        ListNode *temp = head;

        while (temp != NULL)
        {
            if (temp->val == val && temp1  == NULL)
            { 
                temp2 = temp->next;
                temp->next = NULL;
                temp=temp2;
                head=temp;
               
            }

            else if (temp->val == val)
            {
                temp1->next = temp->next;
                                  temp2 = temp->next;
                temp->next = NULL;
                temp=temp2;
            }
            else
            {
                temp1 = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};