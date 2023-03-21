//push테이블을 담당하는 코드
/*
#include "header.h"

using namespace DataStruct;


int main() {
    ofstream file;
    file.open("push.csv");
    int* arr = (int*)malloc(0);
    List list;
    file << "횟수,배열,리스트\n";
    if (file.fail()) {
        cout << "실패\n";
        return 0;
    }
    cout << "성공\n";
    for (int i = 1; i < 11; i++)
        file << to_string(i) + "," + to_string(Push(&arr, i + 1)) + "," + to_string(list.Push(i)) + "\n";
	file.close();
    return 0;
}
*/