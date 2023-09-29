#include <iostream>
#include "IntList.h"
using namespace std;

IntList::IntList() {
    dummyHead = new IntNode(0);
    dummyTail = new IntNode(0);
    dummyHead->next = dummyTail;
    dummyTail->prev = dummyHead;
}

IntList::~IntList() {
    while (!empty()) {
        pop_front();
    }
    delete dummyHead;
    delete dummyTail;
}

void IntList::push_front(int value) {
    IntNode *newNode = new IntNode(value);
    newNode->next = dummyHead->next;
    newNode->prev = dummyHead;
    dummyHead->next->prev = newNode;
    dummyHead->next = newNode;
}

void IntList::pop_front() {
    if (!empty()) {
        IntNode *temp = dummyHead->next;
        dummyHead->next = temp->next;
        temp->next->prev = dummyHead;
        delete temp;
    }
}

void IntList::push_back(int value) {
    IntNode *newNode = new IntNode(value);
    newNode->next = dummyTail;
    newNode->prev = dummyTail->prev;
    dummyTail->prev->next = newNode;
    dummyTail->prev = newNode;
}

void IntList::pop_back() {
    if (!empty()) {
        IntNode *temp = dummyTail->prev;
        dummyTail->prev = temp->prev;
        temp->prev->next = dummyTail;
        delete temp;
    }
}

bool IntList::empty() const {
    return dummyHead->next == dummyTail;
}

ostream &operator<<(ostream &out, const IntList &rhs) {
    for (IntNode *curr = rhs.dummyHead->next; curr != rhs.dummyTail; curr = curr->next) {
        out << curr->data;
        if (curr->next != rhs.dummyTail) {
            out << " ";
        }
    }
    return out;
}

void IntList::printReverse() const {
    for (IntNode *curr = dummyTail->prev; curr != dummyHead; curr = curr->prev) {
        cout << curr->data;
        if (curr->prev != dummyHead) {
            cout << " ";
        }
    }
}