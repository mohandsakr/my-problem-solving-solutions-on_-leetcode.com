/*
problem link: https://leetcode.com/problems/intersection-of-two-linked-lists/
problem name: 160. Intersection of Two Linked Lists
Status: Accepted.
Author: Mohand sakr.
** */

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* list1=headA;
        ListNode* list2;
        while(list1!=NULL){
            list2=headB;
            while(list2!=NULL){
                if(list1==list2){
                    return list1;

                }

                list2=list2->next;

            }
            list1=list1->next;

        }

        return NULL;


        
    }
};
