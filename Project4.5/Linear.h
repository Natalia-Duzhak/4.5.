//Linear.h
#pragma once
#include "Root.h"
class Linear : public Root
{
private:
	int a, b;
	double x1;
public:
	Linear();
	Linear(int, int, double);
	Linear(const Linear& m);

	void SetA(int value) { a = value; }
	void SetB(int value) { b = value; }
	void SetX1(double value) { x1 = value; }

	int GetA() const { return a; }
	int GetB() const { return b; }
	double GetX1() const { return x1; }

	virtual void Result();
	virtual void Print();
};