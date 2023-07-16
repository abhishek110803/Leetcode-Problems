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
    void insertAtTail1(ListNode *&head, ListNode *&tail, int d)
    {

        // new node create
        ListNode *temp = new ListNode(d);
        if (tail == NULL)
        {

            tail = temp;
            head = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *head1 = NULL;
        ListNode *tail = NULL;

        ListNode *temp1 = head;
        while (temp1 != NULL)
        {
            insertAtTail1(head1, tail, temp1->val);

            temp1 = temp1->next;
            if (temp1 != NULL)
            {
                temp1 = temp1->next;
            }
        }

        temp1=head->next;
        while (temp1 != NULL)
        {
            insertAtTail1(head1, tail, temp1->val);

            temp1 = temp1->next;
            if (temp1 != NULL)
            {
                temp1 = temp1->next;
            }
        }

        return head1;
    }
};