// week14-3.cpp 學習計劃 Linked List 第6題
// LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* head) { // 目前看來其實是week14-2.cpp
        if (head == nullptr || head->next == nullptr) return head; // 終止條件
        ListNode* ans = myReverse(head->next); // 呼叫函式
        head->next->next = head; // 目前頭部的下一筆的後續位置
        head->next = nullptr; // 收尾
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1); // 反轉
        ListNode* list2 = myReverse(l2); // 反轉

        ListNode* ans = myAddTwoNumbers(list1, list2); // 呼叫上週的 week13-??.cpp
        return myReverse(ans); // 反轉
    }
    // 還要 myAddTwoNumbers() 函式，要把它寫出來
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999); // 隨便的句令，答案靠後面會有句句的改變
        ListNode* ans2 = ans; // 負責幫 ans 收尾
        int carry = 0; // 進位

        while (list1 != nullptr || list2 != nullptr) {
            int now = carry; // 現在要處理的位數

            if (list1 != nullptr) {
                now += list1->val; // 加入值
                list1 = list1->next; // 換下一筆、佔命
            }

            if (list2 != nullptr) {
                now += list2->val; // 加入值
                list2 = list2->next; // 換下一筆
            }

            ans2->next = new ListNode(now % 10); // 記下「個位數」
            carry = now / 10; // 進位的部分
            ans2 = ans2->next; // 換下一筆
        }

    //（差一點點）忘了處理進位喔!!!
    return ans->next;
}


    // 最後 myAddTwoNumbers() 函式，要把它寫出來
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