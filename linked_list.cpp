#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
    Node(int x){
        val = x;
        next = nullptr;
    }
};

class LinkedList{
    Node* head;
    int size;
public:
    LinkedList(){
        head = nullptr;
        size = 0;
    }
    void push_front(int x){
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        size++;
    }
    void push_back(int x){
        Node* newNode = new Node(x);
        if (size==0){
            head = newNode;
        }
        else{
            Node* curr = head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }
    int get_size() const {
        return size;
    }

    void print_list(){
        Node* curr = head;
        while (curr != nullptr){
            cout << curr->val << " -> ";
            curr = curr->next;
        }
        cout << "nullptr" << endl;
    }
    void delete_value(int x) {
        if (head == nullptr) return; // empty list

        // case 1: head is the node to delete
        if (head->val == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }

        // case 2: somewhere else
        Node* cur = head;
        while (cur->next != nullptr && cur->next->val != x) {
            cur = cur->next;
        }

        if (cur->next != nullptr) {
            Node* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
            size--;
        }
    }
    };

int main(){
    LinkedList lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_front(5);
    lst.print_list();
    cout << "Size: " << lst.get_size() << endl;
}