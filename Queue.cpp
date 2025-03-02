#include "Queue.h"

Queue::Queue() {
	front = 0;
	rear = -1;
	count = 0;
}

bool Queue::isFull() 
{
    return count == SIZE;
}

bool Queue::isEmpty() 
{
    return count == 0;
}

void Queue::push( string& item) 
{ 
    if (isFull()) 
    {
        cout << "Queue Overflow! Cannot push " << item << endl;
        return;
    }
    rear = (rear + 1) % SIZE; 
    arr[rear] = item;
    count++;
}

string Queue::pop() 
{  
    if (isEmpty()) 
    {
        cout << "Queue Underflow! Cannot pop item." << endl;
        return "";
    }
    string item = arr[front];
    front = (front + 1) % SIZE; 
    count--;
    return item;
}

string Queue::peek() 
{
    if (isEmpty()) 
    {
        cout << "Queue is empty!" << endl;
        return "";
    }
    return arr[front];
}