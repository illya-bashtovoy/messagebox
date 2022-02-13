/*
Баштовий.І.В
Створіть програму з графічним інтерфейсом, яка зчитує число,
і виводить результат в messagebox про те, дотаднє число, чи від'ємне.
*/
#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	setlocale(0, "");
	int a;
	cout << "\t\t\tВведiть число:\n ";
	cin >> a;
	if (a > 0) {
		MessageBox(NULL, L"Введене число додатне", L"Значення числа", MB_ICONASTERISK);
	}
	else if (a < 0) {
		MessageBox(NULL, L"Введене число вiд емне ", L"Значення числа", MB_ICONASTERISK);
	}
	else if (a == 0) {
		MessageBox(NULL, L"Введене число нi додатне, нi вiд емне", L"Значення числа", MB_ICONASTERISK);
	}
}


