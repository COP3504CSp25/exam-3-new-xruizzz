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

    int* getStats() const{
        int* nums = new int[3];
        if (head == nullptr) {
            int* nums = new int[3]{0,0,0};
            return &nums[0];
        }
        unsigned int count = 1;
        int total = head->data;
        int minimum = head->data;
        int maximum = head->data;
        Node* temp_head = head;
            while (temp_head->next != nullptr) {
                temp_head = temp_head->next;
                if (temp_head->data < minimum) {
                    minimum = temp_head->data;
                } else if (temp_head->data > maximum) {
                    maximum = temp_head->data;
                }
                ++count;
                total += temp_head->data;
            }
            unsigned int mean = total / count;
            int* nums = new int[3]{minimum, maximum, mean};
            return &nums[0];
    }
    

private:
    Node* head = nullptr;
};
