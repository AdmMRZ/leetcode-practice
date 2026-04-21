#include <iostream> 
using namespace std;

struct ListNode {
    int val;               
    ListNode* next;       
    ListNode() : val(0), next(nullptr) {} 
    ListNode(int x) : val(x), next(nullptr) {} 
    ListNode(int x, ListNode* next) : val(x), next(next) {} 
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head , *prev = nullptr; 
        int count=0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        temp = head;
        if (count ==  1) return nullptr;
        if (n == count)
        {
            return temp->next;
        }
        for (int i = 0 ; i < count - n ; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        return head;
    }
};