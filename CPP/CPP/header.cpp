#include "header.h"

using namespace std;

int DataStruct::Push(int** data, int add) {
    int result = 0;
    int size = _msize(*data) / sizeof(int); // 현재 배열의 크기를 구함
    int* newarray = (int*)malloc((size + 1) * sizeof(int)); // 새로운 배열에 size+1만큼 크기를 선언함
    for (int i = 0; i < size; i++) {
        newarray[i] = (*data)[i];
        result++;
    }
    newarray[size] = add;
    result++;
    *data = newarray;
    return result;
}

int DataStruct::DeQueue(int** data) {
    if (*data == NULL)
        return -1;//-1로 에러코드를 출력함
    int result = 0;
    int size = _msize(*data) / sizeof(int); // 현재 배열의 크기를 구함
    size--;
    int* newarray = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        newarray[i] = (*data)[i + 1];
        result++;
    }
    free(*data);
    *data = newarray;
    return result;
}

void DataStruct::PrintArray(int* data) {
    int size = _msize(data) / sizeof(int);
    cout << "{";
    for (int i = 0; i < size; i++) {
        cout << data[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "}\n";
}

int DataStruct::Pop(int** data) {
    if (*data == NULL)
        return -1;//-1로 에러코드를 출력함
    int result = 0;
    int size = _msize(*data) / sizeof(int); // 현재 배열의 크기를 구함
    size--;                                 // 크기 감소
    int* newarray = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        newarray[i] = (*data)[i];
        result++;
    }
    free(*data);
    *data = newarray;
    return result;
}

Node* MakeNode(int data) {
    Node* result = new Node;
    result->next = NULL;
    result->data = data;
    return result;
}
int List::GetSize() {
    return _msize(this->data);
}

int DataStruct::GetSize(int* data) {
    return _msize(data);
}

List::List() { this->data = NULL; }
List::~List() {
    Node* tmp = this->data;
    while (tmp->next != NULL) {
        Node* del = tmp;
        tmp = tmp->next;
        delete del;
    }
}
int List::Push(int data) {
    Node* newNode = MakeNode(data);
    int result = 1;
    if (this->data == NULL) {
        this->data = newNode;
        return result;
    }
    Node* tmp = this->data;
    while (tmp->next != NULL) {
        tmp = tmp->next;
        result++;
    }
    tmp->next = newNode;
    result++;
    return result;
}
int List::Pop() {
    int result = 0;
    if (this->data == NULL) {
        return -1;
    }
    result++;
    if (this->data->next == NULL) {
        delete this->data;
        this->data->next = NULL;
        return result;
    }
    Node* tmp = this->data;
    while (tmp->next->next != NULL) {
        tmp = tmp->next;
        result++;
    }
    Node* delNode = tmp->next;
    tmp->next = NULL;
    delete delNode;
    return result;
}
int List::DeQueue() {
    int result = 0;
    if (this->data == NULL)
        return -1;
    result++;
    Node* delNode = this->data;
    this->data = this->data->next;
    delNode->next = NULL;
    delete delNode;
    return result;
}
void List::Print() {
    cout << "[";
    if (this->data == NULL) {
        cout << "]\n";
        return;
    }
    if (this->data->next == NULL) {
        cout << this->data->data << "]\n";
        return;
    }
    Node* tmp = this->data;
    while (tmp->next != NULL) {
        cout << tmp->data;
        tmp = tmp->next;
        if (tmp->next != NULL)
            cout << ", ";
    }
    cout << "]\n";
}