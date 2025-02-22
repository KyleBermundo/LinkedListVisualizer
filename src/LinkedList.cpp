#include "LinkedList.h"

//these notes are simplified from deepseek

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
    if (!tail) tail = head; // If list was empty, set tail to head
}

void LinkedList::insertAtTail(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode; // If list is empty, set head and tail
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::deleteHead() {
    if (!head) return; // If list is empty, do nothing
    Node* temp = head;
    head = head->next;
    delete temp;
    if (!head) tail = nullptr; // If list is now empty, set tail to nullptr
}

void LinkedList::deleteTail() {
    if (!head) return; // If list is empty, do nothing
    if (head == tail) { // If there's only one node
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
        temp->draw(); // Draw the node
        if (temp->next) { //this part was made with the help of DEEPSEEK it was also mentioned in one of my push to origin.
            ofDrawLine(temp->x, temp->y, temp->next->x, temp->next->y); // Draw connection to next node 
        }
        temp = temp->next;
    }
}

void LinkedList::update() {
    Node* temp = head;
    float offsetX = 0;
    while (temp) {
        temp->x = offsetX; // Position nodes horizontally
        temp->update(); // Update node animation
        offsetX += temp->size * 2; // Add spacing between nodes
        temp = temp->next;
    }
}

void LinkedList::adjustAmplitude(float delta) {
    Node* temp = head;
    while (temp) {
        temp->amplitude += delta; // Adjust amplitude for each node
        temp = temp->next;
    }
}