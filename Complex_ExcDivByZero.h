#include <iostream>
#include <exception>

#include "Complex.h"

using namespace std;

#ifndef __MyComplexExc__
#define __MyComplexExc__

class Complex_ExcDiv{
protected :
    Complex d1, d2;
    
public:
    Complex_ExcDiv(Complex c1, Complex c2):
        d1(c1), d2(c2)
        {
            
        }
    virtual const char* what(){
        return "Complex_ExcDiv Basis Exception";
    }

    virtual void print();
    Complex getD1(){return d1;}
    Complex getD2(){return d2;}

};

#endif // __MyComplexExc__