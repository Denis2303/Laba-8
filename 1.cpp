#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a;
	cout << "������� ������ ����� � ������. ������ > 0 :";
	cin >> a;
	int b;
	b = a % 1024 == 0 ? a / 1024: a / 1024 + 1;
	cout << "������ ����� � ���������� = " << b;
}
