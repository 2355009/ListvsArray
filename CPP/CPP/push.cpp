//push���̺��� ����ϴ� �ڵ�
/*
#include "header.h"

using namespace DataStruct;


int main() {
    ofstream file;
    file.open("push.csv");
    int* arr = (int*)malloc(0);
    List list;
    file << "Ƚ��,�迭,����Ʈ\n";
    if (file.fail()) {
        cout << "����\n";
        return 0;
    }
    cout << "����\n";
    for (int i = 1; i < 11; i++)
        file << to_string(i) + "," + to_string(Push(&arr, i + 1)) + "," + to_string(list.Push(i)) + "\n";
	file.close();
    return 0;
}
*/