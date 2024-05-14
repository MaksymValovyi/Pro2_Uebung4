#include <iostream>
using namespace std;

#include "Complex.cpp"
#include "Complex_ExcDivByZero.cpp"

void testComplexAssert()
{
    Complex c1(3.0, 2.3);
    Complex c2(1.2, 3.5);

    Complex c3(3.0, 4.0);
    Complex c4(0.0, 0.0);

    cout << "Division: " << c1 << " / " <<  c2 << " = " << c1/c2 << endl;
    cout << "Division: " << c3 << " / " <<  c4 << " = " << c3/c4 << endl;
}

void testComplexException()
{
    Complex c1(3.0, 2.3);
    Complex c2(1.2, 3.5);

    Complex c3(3.0, 4.0);
    Complex c4(0.0, 0.0);

    try {
        cout << "Division: " << c1 << " / " <<  c2 << " = " << c1/c2 << endl;
        cout << "Division: " << c3 << " / " <<  c4 << " = " << c3/c4 << endl;    
    }
    catch (Complex_ExcDiv &e)
    {
        e.print();
        cout << &e;
        cout << "Some handling..." << endl;
        //cout << e; Waere cool, aber spaeter
    }
    
}

int main(int argc, char const *argv[])
{
    testComplexException();

    return 0;
}


