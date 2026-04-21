#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        unordered_map <Node* , Node*> map;
        while (temp)
        {
            Node * x = new Node (temp->val);
            map[temp] = x;
            temp = temp->next;
        }
        temp = head;
        while (temp)
        {
            map[temp]->next = map[temp->next];
            map[temp]->random = map[temp->random];
            temp = temp->next;
        }
        return map[head];
    }
};