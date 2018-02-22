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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* i1=l1;
        ListNode* i2=l2;
        int carry=0;
        ListNode* start=NULL;
        ListNode* temp;
        while(i1!=NULL||i2!=NULL||carry!=0)
        {
            if(i1==NULL) i1= new ListNode(0);
            if(i2==NULL) i2= new ListNode(0);
            ListNode* newnode= new ListNode((i1->val+i2->val+carry)%10);
            carry=(i1->val+i2->val+carry)/10;
            if(start==NULL)
            {
                start=newnode;
            }
            else
            {
                ListNode* temp=start;
                while(temp->next) temp=temp->next;
                temp->next=newnode;
            }
            i1=i1->next;
            i2=i2->next;
        }
        return start;
    }
};