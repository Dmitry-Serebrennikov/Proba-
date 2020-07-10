#include <iostream>
#include <locale.h>
#include <iomanip>
#include "Polynom.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Polynom p1;
	Polynom p2(2);
	Polynom p3(2, { 1, 2, 3 });
	cout << "Пример вывода различно заданных полиномов: " << endl << "p1 = " << p1 << "p2(2) = " 
		<< p2 << "p3(2, {1, 2, 3}) = " << p3 << endl;
	Polynom p4 = p3;
	cout << "Операция присваивания: p4 = p3; вывод p4: " << p4;
	Polynom p5(2, { 2, 4, 2 });
	Polynom p6(1, { 1,1 });
	cout << "p5 = " << p5 << "p6 = " << p6;
	cout << "Основные операции: " << endl;
	cout << "p5 + p6 = " << p5 + p6 << endl;
	cout << "p5 - p6 = " << p5 - p6 << endl;
	cout << "p5 * p6 = " << p5 * p6 << endl;
	cout << "p5 / p6 = " << p5 / p6 << endl;
	cout << "p5 * p6 / p6 = " << p5 * p6 / p6 << endl;
	cout << "Деление, где делимое < делителя: p6 / p5 = " << p6 / p5 << endl;
	
	cout << "Получение степени полинома p3: " << p3.getDegree() << endl;
	cout << "Получение коэффициента 1 степени и свободного члена полинома p3: " << p3.getCoeff(1) <<"; С.Ч: " <<p3.getCoeff(0) << endl; // !!!
	
	cout << "Увеличение степени полинома p3 (умножение на x в степени 2): " << p3.increase(2) << endl;
	Polynom arg(3, { 1, 2, 3, 4 });
	cout << "Вычисление значения многочлена P = " << arg << "для заданного аргумена: " << arg(2) << endl;
	cout << "Нахождение интеграла p3: " << p3.integral() << endl;
	Polynom tpm = p3.integral();
	cout << "Взятие производной ранее проинтегрированного полинома p3: " << tpm.derivative() << endl;
	Polynom p7;
	cout << "Оператор ввода: " << endl << "Введите степень многочлена, затем - его коэффициенты в порядке возрастания степени..." << endl;
	cin >> p7;
	cout << "Вывод: " << p7;
	//Polynom p10(2, { 1, -6, 5 });
	//Polynom p11 (2, { 2, 4, 2 });
	//Polynom p12(1, { 1, 1 });
	Polynom p13(2, { -4, 3, 1 });
	//Polynom p14(2, { 1, 6, 5 });
	Polynom p15(4, { -45, 54, -4, -6, 1 });
	//корни для проверки x E {-3; 1; 3; 5}
	cout << "Существуют ли корни уравнения x^4 - 6x^3 - 4x^2 + 54x - 45 на интервале [0, 2]: " << p15.solution(0, 2) << endl << endl; 
	//корни для проверки x E {-4; 1}
	cout << "Проба с x^2 + 3x - 4 на интервале [5, 10]: " << p13.solution(5, 10) << endl << endl;
	cout << "То же уравнение x^2 + 3x - 4 на интервале [0, 5]: " << p13.solution(0, 5) << endl << endl;

}
