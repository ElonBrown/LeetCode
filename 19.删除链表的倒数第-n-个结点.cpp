/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *slow = head, *fast = head;
        while (n && fast)
        {
            fast = fast->next;
            --n;
        }
        if (fast)
        {
            while (fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
            slow->next = slow->next->next;
        }
        else
        {
            head = head->next;
        }
        return head;
    }
};
// @lc code=end
