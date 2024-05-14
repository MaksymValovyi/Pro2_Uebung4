#include "Complex_ExcDivByZero.h"
//I have exchanged ExcDiv and ExcDivByZero
void Complex_ExcDiv::print()
{
    cout << this->what() << " С1 (" << d1 << ") С2(" << d2 << ")" << endl;
    
}

ostream& operator<<(ostream& s, Complex_ExcDiv *e){
    s << e->what() << " Verursacher: C1(" << e->getD1() << ") C2(" << e->getD2() << ")" << endl;
    return s;
}