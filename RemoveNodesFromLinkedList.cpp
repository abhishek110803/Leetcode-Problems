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
    void insertAtHead1(ListNode *&head1, int d)
    {

        // new node create
        ListNode *temp1 = new ListNode(d);
        if (head1 == NULL)
        {
            head1 = temp1;
        }
        else
        {

            temp1->next = head1;
            head1 = temp1;
        }
    }
    ListNode *reverseList(ListNode *head)
    {

        ListNode *head1 = NULL;

        if (head == NULL)
        {

            return head;
        }

        ListNode *temp = head;

        while (temp != NULL)
        {
            int n = temp->val;
            insertAtHead1(head1, n);
            temp = temp->next;
        }

        return head1;
    }

    ListNode *removeNodes(ListNode *head)
    {

        ListNode *reverse = reverseList(head);
        ListNode *prev = NULL;

        ListNode *head11 = NULL;

        int max;
int count=0;
        while (reverse->next != NULL)
        {

            if (reverse->val < reverse->next->val && count != 1)
            {

                insertAtHead1(head11, reverse->val);
            }

            

            if (reverse->val >= reverse->next->val && count==0 )
            {
                max = reverse->val;
                count=1;

                

            }

            if (reverse->val>=max )
            {
                max = reverse->val;
                count=1;

                insertAtHead1(head11, reverse->val);

            }




            prev = reverse;
            reverse = reverse->next;
        }

        if (reverse->next == NULL && reverse->val == prev->val)
        {
            insertAtHead1(head11, reverse->val);
        }

        return head11;
    }
}

;