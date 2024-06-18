#include <iostream>
using namespace std;

class Calculator
{
public:
	double num1, num2, num3;
	Calculator();

	double add(double num1, double num2) {
		num3 = num1 + num2;
		return num3;
	}
	double multiply(double num1, double num2) {
		num3 = num1 * num2;
		return num3;
	}
	double subtract_1_2(double num1, double num2) {
		num3 = num1 - num2;
		return num3;
	}
	double subtract_2_1(double num2, double num1) {
		num3 = num2 - num1;
		return num3;
	}
	double divide_1_2(double num1, double num2) {
		num3 = num1 / num2;
		return num3;
	}
	double divide_2_1(double num2, double num1) {
		num3 = num2 / num1;
		return num3;
	}
	bool set_num1(double num1) {
		return (num1 != 0);
	}
	bool set_num2(double num2) {
		return (num2 != 0);
	}
};

Calculator::Calculator()
{
	num1 = 0;
	num2 = 0;
	num3 = 0;
}


int main()
{
	setlocale(LC_ALL, "rus");
	Calculator example;
	cout << "Введите num1: ";
	cin >> example.num1;
	while (!(example.set_num1(example.num1))) {
		cout << "Неверный ввод!" << endl;
		cout << "Введите num1: ";
		cin >> example.num1;
	}
	cout << "Введите num2: ";
	cin >> example.num2;
	while (!(example.set_num2(example.num2))) {
		cout << "Неверный ввод!" << endl;
		cout << "Введите num2: ";
		cin >> example.num2;
	}
	cout << "num1 + num2 = " << example.add(example.num1, example.num2) << endl;
	cout << "num1 * num2 = " << example.multiply(example.num1, example.num2) << endl;
	cout << "num1 - num2 = " << example.subtract_1_2(example.num1, example.num2) << endl;
	cout << "num2 - num1 = " << example.subtract_2_1(example.num2, example.num1) << endl;
	cout << "num1 / num2 = " << example.divide_1_2(example.num1, example.num2) << endl;
	cout << "num2 / num1 = " << example.divide_2_1(example.num2, example.num1) << endl;
}

