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
    {  cout<<d<<"'";

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




    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *head = NULL;
        ListNode *tail = NULL;

         if (list1 == NULL && list2 == NULL)
        {

            return list1;
        }
        else if (list1 == NULL)
        { cout<<"d";
            return list2;
        }
        else if (list2 == NULL)
        {
            return list1;
        }

        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        while (temp1 != NULL && temp2 != NULL)
        {

            if (temp1->val > temp2->val)
            {    cout<<temp2->val<<",";
                insertAtTail1(head, tail, temp2->val);
                temp2 = temp2->next;
                
            }
            else if (temp1->val == temp2->val)
            { cout<<temp2->val<<",";
                insertAtTail1(head, tail, temp2->val);
                temp2 = temp2->next;
                cout<<temp1->val<<",";
                insertAtTail1(head, tail, temp1->val);
                temp1 = temp1->next;
            }
            else
            { cout<<temp1->val<<",";
                insertAtTail1(head, tail, temp1->val);
                temp1 = temp1->next;
            }
        }

        if (temp1 != NULL)
        {
            while (temp1 != NULL)
            { cout<<temp1->val<<",";
                insertAtTail1(head, tail, temp1->val);
                temp1 = temp1->next;
            }
        }
        else if (temp2 != NULL)
        {
            while (temp2 != NULL)
            { cout<<temp2->val<<",";
                insertAtTail1(head, tail, temp2->val);
                temp2 = temp2->next;
            }
        }

        return head;
    }
};