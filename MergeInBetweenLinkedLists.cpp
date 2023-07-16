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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {

        ListNode *curr = list1;
        ListNode *prev = NULL;
        ListNode *curr1 = list2;
        while (curr1->next != NULL)
        {
            curr1 = curr1->next;
        }

        int i = 0;
        while (i != a)
        {

            prev = curr;
            curr = curr->next;
            i++;
        }
        if (i == a)
        {
            prev->next = list2;
            
        }
        while (i != b)
        {

            curr = curr->next;
            i++;
        }

        if (i == b)
        {
            curr1->next = curr->next;
            curr->next = NULL;
            
        }

        return list1;
    }
};