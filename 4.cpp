#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	string a;
	cout << "������� ����������� �����: ";
	cin >> a;
	for (int i = a.size() - 1; i >=0; i --){
		cout << a[i];
	}
}
