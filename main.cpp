
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


// ==== Главная функция: меню ====

int main() {
	int choice;
	double v;

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
			cout << "Введите скорость: ";
			cin >> v;
			cout << v << " мили/ч = " << mphToKmh(v) << " км/ч" << endl;
			break;
		case 2:
			cout << "Введите скорость: ";
			cin >> v;
			cout << v << " км/ч = " << kmhToMph(v) << " мили/ч" << endl;
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