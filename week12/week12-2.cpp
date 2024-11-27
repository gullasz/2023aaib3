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
public: // * 代表指標 用來瞄準的準心
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = list1; //可轉接(舊的list1)過去
        //ListNode* ans =new ListNode(99); //可以開新的(放了99進去)
        //開新的Node 裡面放99 後面轉接新的Node裡有90
        ListNode* ans = new ListNode(99,new ListNode(90));
        return ans;
    }
};
