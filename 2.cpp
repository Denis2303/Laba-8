#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"rus");
	int a;
	int b;
	cout <<"Введите длины отрезков A и B. A > B: ";
	cin >> a >> b;
	cout << "На отрезке A можно разместить " << a/b << " отрезков B";
}
