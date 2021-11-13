#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	string a;
	string b;
	cout << "Введите трехзначное число: ";
	cin >> a;
	b = a[0];
	for (int i = 1; i <= 2; i++){
		cout <<a[i];
	}
	cout <<b;
}
