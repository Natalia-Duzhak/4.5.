//Linear.ccp
#include "Linear.h"

Linear::Linear()
	:a(0),b(0),x1(0)
{}
Linear::Linear(int a, int b, double x1)
	: a(a),b(b), x1(x1)
{}
Linear::Linear(const Linear& m)
	: a(m.a),b(m.b),x1(m.x1)
{}
void Linear::Result()
{
	SetX1((-1 * GetB()) / (GetA() * 1.));
}
void Linear::Print()
{
	cout << GetA() << "x" << " + " << GetB() << " = 0 " << endl;
	cout << "x = " << GetX1() << endl;
}

