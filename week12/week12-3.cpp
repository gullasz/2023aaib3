class Solution {
public: // * 代表指標 用來瞄準的準心
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();//空的
        ListNode* now = ans;//答案放在now裡

        while(list1 != nullptr || list2 != nullptr)
        {
            if(list1 == nullptr)//list1 是空的
            {
                now->next = list2;//list2全上
                list2 = nullptr;//清空list2
            }
            else if(list2 == nullptr)//list2 是空的
            {
                now->next = list1;//list1全上
                list1 = nullptr;//清空list1
            }
            else if(list1->val < list2->val)//list1是小的
            {
                now->next = new ListNode(list1->val);//now的下一筆為小的
                list1 = list1->next; //list1換下一筆
                now = now->next; //now換下一筆
            }
            else
            {
                now->next = new ListNode(list2->val);//now的下一筆為小的
                list2 = list2->next;//list2換下一筆
                now = now->next;//now換下一筆
            }
        }
        return ans->next;//空的下一筆才是答案
    }
};
