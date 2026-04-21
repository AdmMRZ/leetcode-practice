#include <iostream> 
#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* createNode(int value) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = value;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    ListNode* dummy = createNode(0);
    ListNode* tail = dummy;
    ListNode* head = l1;

    int sum1 = 0 , sum2 = 0;
    while (head)
    {
        sum1 += head->val;
        head = head->next;
    }
    head = l2;
    while (head)
    {
        sum2 += head->val;
        head = head->next;
    }
    sum1 = sum1 + sum2;

    while (sum1 != 0)
    {
        tail->next = createNode(sum1 % 10);
        tail = tail->next;
        sum1 /= 10;
    }
    
    return dummy.next;
}