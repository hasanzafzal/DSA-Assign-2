#include <iostream>
#include <fstream>
#include "Queue.h"
using namespace std;

int main() 
{
    ofstream outFile("queue.txt");  
    outFile << "S1 S2 S3 T1 S4 T2 P1";
    outFile.close();
    ifstream inFile("queue.txt");
    if (!inFile) 
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    Queue parents, students, teachers;
    string people;
    while (inFile >> people) 
    { 
        if (people[0] == 'P')
        {
            parents.push(people);
        }
        else if (people[0] == 'T')
        {
            teachers.push(people);
        }
        else if (people[0] == 'S')
        {
            students.push(people);
        }
    }
    inFile.close();
    cout << "Priority Order Output:\n";
    while (!parents.isEmpty())
    {
        cout << parents.pop() << " ";
    }
    while (!teachers.isEmpty())
    {
        cout << teachers.pop() << " ";
    }
    while (!students.isEmpty())
    {
        cout << students.pop() << " ";
    }
    cout << endl;
    return 0;
}