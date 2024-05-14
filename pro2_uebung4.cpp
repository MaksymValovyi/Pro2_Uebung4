#include <iostream>
using namespace std;

#include "Complex.cpp"

void testComplexAssert()
{
    Complex c1(3.0, 2.3);
    Complex c2(1.2, 3.5);
    Complex c3(3.0, 4.0);
    Complex c4(0.0, 0.0);

    cout << "Division: " << c1 << " / " <<  c2 << " = " << c1/c2 << endl;
    cout << "Division: " << c3 << " / " <<  c4 << " = " << c3/c4 << endl;
}

int main(int argc, char const *argv[])
{
    testComplexAssert();
    
    return 0;
}


