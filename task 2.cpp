#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	const double PI = 3.14159265358979;
	double r;
	cout << "Введите радиус сферы";
	cin >> r;
	double S = 4 * PI * r * r;
	cout << "Площадь поверхности сферы: " << S << endl;
	return 0;
}