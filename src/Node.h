#pragma once
#include "ofMain.h"

//this is from lectures and https://www.geeksforgeeks.org/cpp-program-for-inserting-a-node-in-a-linked-list/
//needed for the node.cpp to work and declares class
class Node {
public:
    //these notes are simplified from deepseek
    int data; //stores value
    Node* next; //a pointer for the next node in the linked list    
    float x, y; // Positioning of the node on the screen
    float size; //size of the node
    float angle; //for the animation

    Node(int value);//this is a constructor to initialize the node
    void update();//this updates the node's position for the animation
    void draw();// Draw the node
};