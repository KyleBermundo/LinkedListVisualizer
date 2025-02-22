#include "Node.h"
//this is from lectures and https://www.geeksforgeeks.org/cpp-program-for-inserting-a-node-in-a-linked-list/
//notes are simplified from Deepseek
Node::Node(int value) {
    data = value;
    next = nullptr;
    x = 0;
    y = 0;
    size = data * 5; // Size based on data value
    angle = 0;
    amplitude = 50; // Default amplitude
}

void Node::update() {
    angle += 0.05; // Increment angle for smooth animation
    y = sin(angle) * amplitude; // Use amplitude for oscillation
}

void Node::draw() {
    ofDrawCircle(x, y, size); // Draw the node as a circle
    ofDrawBitmapString(ofToString(data), x - 10, y + 5); // Display the data value
}