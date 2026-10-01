#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	char op;
	cout << "Введите a,b и операцию (например: 5 3 +):";
	cin >> a >> b >> op;
	if (op == '+') {
		cout << a + b << endl;
	}
	else if (op == '-') {
		cout << a - b << endl;
	}
	else if (op == '*') {
		cout << a * b << endl;
	}
	else if (op == '/') {
		if (b != 0)
			cout << a / b << endl;
		else
			cout << "Ошибка: деление на ноль " << endl;
	}
	else if (op == '%') {
		if (b != 0)
			cout << a % b << endl;
		else
			cout << "Ошибка: деление на ноль" << endl;
	} 
	else { cout << "Неизвестная операция" << endl;
	}
	return 0;
}