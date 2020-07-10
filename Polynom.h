#ifndef POLYNOM_H_INCLUDED
#define POLYNOM_H_INCLUDED
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Polynom {
private:
	int degree;
	vector<double> coeff;
public:
	//конструкторы
	Polynom();
	Polynom(int dg);
	Polynom(int dg, const vector<double> & cf);
	//конструктор копирования
	Polynom(const Polynom& p);
	//получение степени полинома
	int getDegree();
	//получение коэффициента 
	double getCoeff(int dg);
	//double koren(const Polynom&, double start, double end);
	void reduce(void);
	
	Polynom& operator + (const Polynom&) const;
	Polynom& operator - (const Polynom&) const;
	Polynom& operator * (const Polynom&) const;
	Polynom& operator * (double) const;
	Polynom& operator / (const Polynom&) const;
	Polynom& increase(int) const;
	
	//вычисление значения многочлена для заданного аргумена
	double operator () (int);
	//взятие производной с получением нового объекта-многочлена
	Polynom derivative();
	//взятие интеграла
	Polynom integral();


	friend ostream& operator << (ostream&, const Polynom&);
	friend istream& operator >> (istream&, Polynom&);

	bool solution(double begin, double end);
	double koren(Polynom p, double x0);
};
#endif