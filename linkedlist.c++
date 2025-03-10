
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* buatNode(int nilai) {
    Node* nodeBaru = new Node();
    nodeBaru->data = nilai;
    nodeBaru->next = nullptr;
    return nodeBaru;
}

void tambahAwal(Node*& head, int nilai);
void tambahAkhir(Node*& head, int nilai);
void tampilkan(Node* head);

int main() {
    Node* head = nullptr;

    tambahAwal(head, 10);
    tambahAwal(head, 20);
    tambahAkhir(head, 30);

    tampilkan(head);
    return 0;
}

void tambahAwal(Node*& head, int nilai) {
    Node* nodeBaru = buatNode(nilai);
    nodeBaru->next = head;
    head = nodeBaru;
}

void tambahAkhir(Node*& head, int nilai) {
    Node* nodeBaru = buatNode(nilai);
    if (head == nullptr) {
        head = nodeBaru;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = nodeBaru;
    }
}

void tampilkan(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

