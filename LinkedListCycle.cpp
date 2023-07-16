

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:

    bool hasCycle(ListNode *head)
    {
       if(head==NULL){ return false;}

        ListNode *temp = head;
        ListNode *temp1 = head ->next;

        while ( temp1 != NULL)

        { if( temp==temp1){ return true;}
            
            temp = temp->next;
          temp1 = temp1->next;
          if (temp1==NULL){return false;}
          temp1 = temp1->next;
          

            
        }
        return false;
    }
};

