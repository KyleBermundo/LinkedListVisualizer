#include "Node.h"
//this is from lectures and https://www.geeksforgeeks.org/cpp-program-for-inserting-a-node-in-a-linked-list/

Node::Node(int value) {
    data = value;
    next = nullptr;
    x = 0;
    y = 0;
    size = data * 5;
    angle = 0;
}

void Node::update() { 
    angle += 0.05;
    y = sin(angle) * 50;
}