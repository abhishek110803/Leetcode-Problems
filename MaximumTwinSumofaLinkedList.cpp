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

    int pairSum(ListNode* head) {

        ListNode* reverse=reverseList(head);
     ListNode*temp11=head;
     int maxsum=0;
     int sum;
    while (temp11 != NULL)
        {
            sum =temp11->val+reverse->val;
            if(sum>maxsum){maxsum=sum;}
            temp11 = temp11->next;
            reverse = reverse->next;
        }
        return maxsum;


        
    }
};