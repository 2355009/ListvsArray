#include <iostream>
#include <fstream>
#include<string>
using namespace std;

namespace DataStruct {
    int Push(int** data, int add);
    int DeQueue(int** data);
    int Pop(int** data);
    void PrintArray(int* data);
    int GetSize(int* data);
}

struct Node {
    int data;
    Node* next;
};

Node* MakeNode(int data);

class List {
private:
    Node* data;
public:
    int GetSize();
    List();
    ~List();
    int Push(int data);
    void Print();
    int Pop();
    int DeQueue();
};