//Source.ccp
#include "Linear.h";
#include "Square.h";

int main()
{
    cout << "Linear" << endl;
    Linear A(-5, 12, 1);
    A.Result();
    A.Print();

    cout << "Square" << endl;
    Square B(9, 9, 9, 1, 1);
    B.Result();
    B.Print();

    cout << "Square" << endl;
    Square C(-3, 6, 9, 1, 1);
    C.Result();
    C.Print();

    Root* pa = new Linear();
    Root* pb = new Square();
    Root* pc = new Square();


    cout << endl;
    cout << typeid(pa).name() << endl;
    cout << typeid(*pa).name() << endl;
    cout << typeid(pb).name() << endl;
    cout << typeid(*pb).name() << endl;
    cout << typeid(pc).name() << endl;
    cout << typeid(*pc).name() << endl;


    Root* N[3];

    N[0] = &A;
    N[1] = &B;
    N[2] = &C;

    cout << "Linear" << endl;
    N[0]->Print();
    cout << "Square" << endl;
    N[1]->Print();
    cout << "Square" << endl;
    N[2]->Print();

    return 0;
}