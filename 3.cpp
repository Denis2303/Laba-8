#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"rus");
	int a, b;
	cout << "������� ����� �������� � � �. A>�: ";
	cin >> a >> b;
	cout << "����� ��������� ����� ����� - " << a % b;
}
