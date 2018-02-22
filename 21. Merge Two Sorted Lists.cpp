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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL&&l2==NULL) return NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* start=NULL;
        ListNode* i1=l1;
        ListNode* i2=l2;
        int val1, val2;
        while(i1!=NULL&&i2!=NULL)
        {
            val1=i1->val;
            val2=i2->val;
            ListNode* newnode;
            if(val1<=val2)
            {
                newnode= new ListNode(val1);
                i1=i1->next;
            }
            else
            {
                newnode= new ListNode(val2);
                i2=i2->next;
            }
            if(start==NULL)
            {
                start=newnode;
            }
            else
            {
                ListNode* temp=start;
                while(temp->next!=NULL) temp=temp->next;
                temp->next=newnode;
            }
        }
        ListNode* i3= (i1!=NULL) ? i1 : i2;
        ListNode* temp=start;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=i3;
        
        
        
        
        return start;
    }
};