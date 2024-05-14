//I have exchanged ExcDiv and ExcDivByZero

#include "Complex_ExcDivByZero.h"

class Complex_ExcDivByZero : public Complex_ExcDiv{

public:
    Complex_ExcDivByZero(Complex c1, Complex c2):
        Complex_ExcDiv( c1, c2 )
        {
            
        }

    const char* what(){
        return "Exception : Division durch 0 ist verboten!";
    }

};

