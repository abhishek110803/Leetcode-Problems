/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        map <ListNode *,bool> visited;
         if(head==NULL){ return NULL;}
         //ListNode *prev = NULL;
        ListNode *temp = head;
      //  ListNode *temp1 = head ->next;

        while ( temp != NULL)

        {   if( !visited[temp]){
              visited[temp]=true;}
              else{ return temp;}
              temp=temp->next;


           
          

            
        }
        return NULL;
        
    }
};