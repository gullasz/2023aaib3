class Solution {
public: // * �N����� �ΨӺ˷Ǫ��Ǥ�
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();//�Ū�
        ListNode* now = ans;//���ש�bnow��

        while(list1 != nullptr || list2 != nullptr)
        {
            if(list1 == nullptr)//list1 �O�Ū�
            {
                now->next = list2;//list2���W
                list2 = nullptr;//�M��list2
            }
            else if(list2 == nullptr)//list2 �O�Ū�
            {
                now->next = list1;//list1���W
                list1 = nullptr;//�M��list1
            }
            else if(list1->val < list2->val)//list1�O�p��
            {
                now->next = new ListNode(list1->val);//now���U�@�����p��
                list1 = list1->next; //list1���U�@��
                now = now->next; //now���U�@��
            }
            else
            {
                now->next = new ListNode(list2->val);//now���U�@�����p��
                list2 = list2->next;//list2���U�@��
                now = now->next;//now���U�@��
            }
        }
        return ans->next;//�Ū��U�@���~�O����
    }
};
