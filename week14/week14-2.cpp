//week14-2.cpp
//超大的數有100位數
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans= new ListNode();
        ListNode* now = ans;
        int carry = 0;//進位
        while(l1 != nullptr || l2 != nullptr) // 只針對其中一個 list1
        {
            if(l1==nullptr)//l1是空的
            {
                int here = l2->val + carry;//移掉l1 剩下l2
                now -> next = new ListNode(here%10); //建新node
                carry = here / 10;
                l2 = l2 -> next;//移掉l1 剩下l2
            }
            else if(l2==nullptr)
            {
                int here = l1->val + carry;//移掉l2 剩下l1
                now -> next = new ListNode(here%10); //建新node
                carry = here / 10;
                l1 = l1 -> next;//移掉l2 剩下l1
            }
            else
            {
                int here = l1->val + l2->val + carry;
                now -> next = new ListNode(here%10); //建新node
                carry = here / 10;
                l1 = l1 -> next;//下一筆
                l2 = l2 -> next;     
            }
            now = now -> next;//下一筆
            
        }
        if(carry==1) now -> next = new ListNode(carry);
        return ans -> next;
    }
};
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