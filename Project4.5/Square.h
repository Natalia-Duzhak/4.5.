//Square.h
#pragma once
#include "Root.h"
class Square : public Root
{
private:
	int a, b, c;
	double x1, x2;
public:
	Square();
	Square(int, int, int, double, double);
	Square(const Square& m);

	void SetA(int value) { a = value; }
	void SetB(int value) { b = value; }
	void SetC(int value) { c = value; }
	void SetX1(double value) { x1 = value; }
	void SetX2(double value) { x2 = value; }

	int GetA() const { return a; }
	int GetB() const { return b; }
	int GetC() const { return c; }
	double GetX1() const { return x1; }
	double GetX2() const { return x2; }

	void Result();
	void Print();
};