#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите размер файла в байтах. размер > 0 :";
	cin >> a;
	int b;
	b = a % 1024 == 0 ? a / 1024: a / 1024 + 1;
	cout << "Размер файла в килобайтах = " << b;
}
