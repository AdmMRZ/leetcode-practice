#include <queue>
#include <iostream>
#include <vector>
#include <algorithm>
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode(0), *node = dummy;  
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < lists.size(); i++) {
            while (lists[i]) {
                pq.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }

        while (!pq.empty()) {
            node->next = new ListNode(pq.top()); 
            pq.pop();
            node = node->next;
        }

        return dummy->next;
    }
};
