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
public: // * �N����� �ΨӺ˷Ǫ��Ǥ�
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode* ans = list1; //�i�౵(�ª�list1)�L�h
        //ListNode* ans =new ListNode(99); //�i�H�}�s��(��F99�i�h)
        //�}�s��Node �̭���99 �᭱�౵�s��Node�̦�90
        ListNode* ans = new ListNode(99,new ListNode(90));
        return ans;
    }
};
