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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1==NULL)return list2;
    if(list2==NULL)return list1;
    ListNode *result=new ListNode;
    ListNode *result_return=result;

        while(list1!=NULL && list2!=NULL){
            
            if(list1->val>=list2->val){
                result->val=list2->val;
                result->next=new ListNode;
                list2=list2->next;
            }
            else{
                result->val=list1->val;
                result->next=new ListNode;
                list1=list1->next;
            }
            if(list1!=NULL&&list2==NULL){
                break;
            }
            else if(list2!=NULL&&list1==NULL){
                break;
            }
            result=result->next;
            
        }
        if (list1 != NULL) {
        result->next = list1;
    } else {
        result->next = list2;
    }
        return result_return;
}

};