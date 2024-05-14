#include <iostream>
using namespace std;

#include "Complex.h"


Complex::Complex(double real_part, double imag_part)
    : re(real_part), im(imag_part)
{

}

Complex Complex::operator+(const Complex &c1)
{
    Complex cresult(re + c1.re, im + c1.im);
    
    return cresult;
}

Complex Complex::operator*(const Complex &c1) const
{
    Complex cresult(re * c1.re - im*c1.im, re*c1.im + c1.re*im);
    
    return cresult;
}
//Before it was local, but than I made global
/*
Complex operator*(const Complex &c1 ,int number)
{
    Complex cresult(c1.re * number, c1.im * number);
    return cresult;
}
*/
Complex Complex::operator+=(const Complex &c1) const
{
    Complex cresult(re+c1.re, im+c1.im);

    return cresult;
}

Complex Complex::operator+(const Complex &c1) const
{
    Complex cresult(re + c1.re, im + c1.im);
    
    return cresult;
}


///////// Hier folgen die globalen Funktionen

ostream& operator<<(ostream& os, const Complex &c)
{
    if(c.getIm()<0){
        os << c.getRe() << " - " << c.getIm() << "i"; 
    }else
    {
        os << c.getRe() << " + " << c.getIm() << "i"; 
    }
    
    return os;
}
//Warum global
Complex operator*(int number, Complex &c)
{
    Complex cresult(c.getRe() * number, c.getIm() * number);
    return cresult;
}

Complex operator*(Complex &c, int number)
{
    Complex cresult(c.getRe() * number, c.getIm() * number);
    return cresult;
}


