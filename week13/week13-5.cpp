
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode();//準備新的ListNode()
        ListNode * now = ans;//現在要處理的ListNode是ans往下走
        while(list1 != nullptr || list2 != nullptr)//只要其一還有值
        {
            if(list1==nullptr) 
            {
                now->next = list2;
                list2 = nullptr;
            }
            else if(list2==nullptr) 
            {
                now->next = list1;
                list1 = nullptr;
            }
            else
            {
                if(list1->val < list2->val)//左邊list1小
                {
                    now->next=new ListNode(list1->val);
                    list1=list1->next;
                }
                else//右邊list2小
                {
                    now->next=new ListNode(list2->val);
                    list2=list2->next;
                }
                now = now->next;
            }
        }
        return ans->next;
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