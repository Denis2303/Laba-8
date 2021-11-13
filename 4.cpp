#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	string a;
	cout << "¬ведите двухзначное число: ";
	cin >> a;
	for (int i = a.size() - 1; i >=0; i --){
		cout << a[i];
	}
}
