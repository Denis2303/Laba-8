#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"rus");
	int a;
	int b;
	cout <<"������� ����� �������� A � B. A > B: ";
	cin >> a >> b;
	cout << "�� ������� A ����� ���������� " << a/b << " �������� B";
}
