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
    void insertAtTail1(ListNode *&head1, ListNode *&tail, int d)
    {

        // new node create
        ListNode *temp = new ListNode(d);
        if (tail == NULL)
        {

            tail = temp;
            head1 = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode *mergeNodes(ListNode *head)
    {

        ListNode *temp = head->next;

        ListNode *head1 = NULL;
        ListNode *tail = NULL;
        int sum = 0;

        while (temp != NULL)
        {

            if (temp->val == 0 && sum !=0)
            {
                insertAtTail1(head1, tail, sum);
                sum=0;
            }

            if(temp->val!=0){sum=sum+temp->val;}
            temp = temp->next;
        }
        return head1;
    }
};