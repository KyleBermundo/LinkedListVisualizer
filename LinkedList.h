#pragma once
#include "Node.h"

//from lecture and from these links on geeksforgeeks
// https://www.geeksforgeeks.org/linked-list-data-structure/
// https://www.geeksforgeeks.org/singly-linked-list-tutorial/

//these notes are simplified from deepseek
class LinkedList { //declares the linkedlist class and its members
public:
    Node* head; //a pointer to the first node in the linked list
    Node* tail; //a pointer to the last node in the linked list

    LinkedList(); //this is a contructor to initialize an empty linked list
    void insertAtHead(int value); //this inserts a new node at the head
    void insertAtTail(int value); //this inserts a new node at the tail
    void deleteHead(); //this will delete the head node
    void deleteTail(); //this will delete the tail node
    void draw(); //this draws all nodes and connections on the screen
    void update(); //this updates all nodes for animation
};