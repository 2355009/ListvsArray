//DeQueue���̺��� ����ϴ� �ڵ�
/*
#include "header.h"

using namespace DataStruct;


int main() {
    ofstream file;
    file.open("DeQueue.csv");
    int* arr = (int*)malloc(0);
    List list;
    file <<  = "Ƚ��,�迭,����Ʈ\n";
    if (file.fail()) {
        cout << "����\n";
        return 0;
    }
    cout << "����\n";
    for (int i = 1; i < 11; i++) {
        Push(&arr, i + 1);
        list.Push(i);
    }
    for (int i = 1; i < 10; i++)
        file << to_string(i) + "," + to_string(DeQueue(&arr)) + "," + to_string(list.DeQueue()) + "\n";
	file.close();
    return 0;
}*/