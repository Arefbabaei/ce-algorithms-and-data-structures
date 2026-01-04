#include <iostream>
#include <stdexcept>

struct Node {
    int value;
    Node* next;
    Node(int v) : value(v), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_front(int v) {
        Node* n = new Node(v);
        n->next = head;
        head = n;
    }

    int pop_front() {
        if (!head) throw std::runtime_error("List is empty");
        int v = head->value;
        Node* temp = head;
        head = head->next;
        delete temp;
        return v;
    }

    void print() const {
        Node* cur = head;
        while (cur) {
            std::cout << cur->value << " -> ";
            cur = cur->next;
        }
        std::cout << "NULL\n";
    }
};

int main() {
    LinkedList ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.print();

    std::cout << "Popped: " << ll.pop_front() << "\n";
    ll.print();

    return 0;
}