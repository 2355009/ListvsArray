//����Ʈ�� �迭�� ũ�⸦ ���ϴ� �ڵ�
/*
#include"header.h"

using namespace DataStruct;

int main() {
	ofstream file;
	file.open("size.csv");
	int* arr = (int*)malloc(0);
	List list;
	string result = "Ƚ��,�迭,����Ʈ\n";
	if (file.fail()) {
		cout << "����\n";
		return 0;
	}
	cout << "����\n";
	for (int i = 1; i < 11; i++) {
		Push(&arr, i + 1);
		list.Push(i);
		result += to_string(i) + "," + to_string(GetSize(arr))+","+ to_string(list.GetSize())+"\n";
	}
	file.write(result.c_str(), result.size());
	file.close();
	return 0;
}*/