//리스트와 배열의 크기를 구하는 코드
/*
#include"header.h"

using namespace DataStruct;

int main() {
	ofstream file;
	file.open("size.csv");
	int* arr = (int*)malloc(0);
	List list;
	string result = "횟수,배열,리스트\n";
	if (file.fail()) {
		cout << "실패\n";
		return 0;
	}
	cout << "성공\n";
	for (int i = 1; i < 11; i++) {
		Push(&arr, i + 1);
		list.Push(i);
		result += to_string(i) + "," + to_string(GetSize(arr))+","+ to_string(list.GetSize())+"\n";
	}
	file.write(result.c_str(), result.size());
	file.close();
	return 0;
}*/