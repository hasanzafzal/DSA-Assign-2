#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

class Queue 
{
private:
    static const int SIZE = 100; 
    string arr[SIZE];
    int front, rear, count; 
public:
    Queue();
    bool isFull();
    bool isEmpty();
    void push(string& item); 
    string pop();                 
    string peek();
};

#endif