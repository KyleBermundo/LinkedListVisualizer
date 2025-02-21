#include "LinkedList.h"



//from lecture and from these links on geeksforgeeks
// https://www.geeksforgeeks.org/linked-list-data-structure/
// https://www.geeksforgeeks.org/singly-linked-list-tutorial/
LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    if (!tail) tail = head;
}

void LinkedList::insertAtTail(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::deleteHead() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    delete temp;
    if (!head) tail = nullptr;
}

void LinkedList::deleteTail() {
    if (!head) return;
    if (head == tail) {
        delete head;
        head = tail = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }
    delete tail;
    tail = temp;
    tail->next = nullptr;
}

void LinkedList::draw() {
    Node* temp = head;
    while (temp) {
        ofDrawCircle(temp->x, temp->y, temp->size);
        ofDrawBitmapString(ofToString(temp->data), temp->x - 10, temp->y + 5);
        if (temp->next) {
            ofDrawLine(temp->x, temp->y, temp->next->x, temp->next->y);
        }
        temp = temp->next;
    }
}

void LinkedList::update() {
    Node* temp = head;
    float offsetX = 0;
    while (temp) {
        temp->x = offsetX;
        temp->update();
        offsetX += temp->size * 2;
        temp = temp->next;
    }
}