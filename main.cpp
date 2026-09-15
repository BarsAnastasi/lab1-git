
// Лабораторная работа № 1. Вариант 76.
// Выполнила: Барсукова А.А., группа ПИ-51.

#include <iostream>
using namespace std;

// ==== Расчетные функции варианта ====

#define COEFF 1.609344	// коэффициент для перевода 

// Перевод из мили/ч в км/ч
double mphToKmh(double v) {
	return v * COEFF;
}


// Перевод из км/ч в мили/ч
double kmhToMph(double v) {
	return v / COEFF;
}

// Функция для ввода скорости, конвертации и вывода
void output(double (*convert)(double), string oldMeasure, string newMeasure)
{
	double v;
	cout << "Введите скорость: ";
	cin >> v;
	cout << v << oldMeasure << " -> " << convert(v) << newMeasure << endl;
}

// ==== Главная функция: меню ====

int main() {
	int choice;

	do {
		cout << "\n==== Вариант 76: Конвертер скорости мили/ч <-> км/ч ====\n";

		cout << "1. мили/ч -> км/ч\n";
		cout << "2. км/ч -> мили/ч\n";
		cout << "0. Завершить работу\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			output(mphToKmh, " мили/ч", " км/ч");
			break;
		case 2:
			output(kmhToMph, " км/ч", " мили/ч");
			break;
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}

	} while (choice != 0);

	return 0;
}