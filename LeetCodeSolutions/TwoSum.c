/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode *temp1 = l1;
    struct ListNode *temp2 = l2;
    struct ListNode *ans = malloc(sizeof(struct ListNode));
    struct ListNode *c = ans;// = malloc(sizeof(struct ListNode));
    
    int carry = 0;
    int sum = 0;
    
    while(temp1 != NULL && temp2 != NULL){
        //printf("%d",temp1->val);printf("%d",temp2->val);
        
        sum = carry + temp1->val + temp2->val;
        
        if(sum > 10){
            carry = sum/10;
            sum = sum %10;
        }
        c->val = sum;
        c->next = malloc(sizeof(struct ListNode));
        temp1 = temp->next;temp2 = temp2->next; c = c->next;
        
    }
    return (ans);
}

