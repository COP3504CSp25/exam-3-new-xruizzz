#pragma once
#include <vector>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        LinkedList reversedList = {};
        if (head == nullptr) {
            return reversedList;
        }  else if (head->next == nullptr) {
            reversedList.addHead(head->data);
            return reversedList;
        }
        std::vector<Node*> nodes = {};
        Node* temp_head = head;
        nodes.push_back(temp_head);
        while (temp_head->next != nullptr) {
            temp_head = temp_head->next;
            nodes.push_back(temp_head);
        }
        for (size_t i = nodes.size() - 1; i > 0; --i) {
            reversedList.addHead(nodes[i]->data);
        }
        return reversedList;
    }

private:
    Node* head = nullptr;
};
