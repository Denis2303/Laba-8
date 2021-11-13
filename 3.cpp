#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"rus");
	int a, b;
	cout << "Введите длину отрезков А и Б. A>Б: ";
	cin >> a >> b;
	cout << "Длина незанятой части равна - " << a % b;
}
