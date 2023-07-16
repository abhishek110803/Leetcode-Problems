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
    ListNode *swapPairs(ListNode *head)
    {

        if (head == NULL)
        {

            return head;
        }

        ListNode *temp = head;
        ListNode *temp1 = temp->next;

        if (temp1 == NULL)
        {
            return head;
        }

        while (temp1 != NULL)
        {

            int tem = temp->val;
            temp->val = temp1->val;
            temp1->val = tem;

            if (temp1->next != NULL && temp1->next->next != NULL)
            {
                temp = temp->next->next;
                temp1 = temp1->next->next;
            }

            else
            {
                return head;
            }
        }

        return head;
    }
};