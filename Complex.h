#include <iostream>
using namespace std;

#ifndef ComplexNum
#define ComplexNum

class Complex
{

double re;
double im;

public:
    inline Complex(double real_part, double imag_part);

    double getRe()
    {
        return re;
    };
    double getRe() const
    {
        return re;
    };
    double getIm()
    {
        return im;
    };
    double getIm() const
    {
        return im;
    };

    //Setters 
    void setRe(double number)
    {
        re = number;
    };
    void setIm(double number)
    {
        im = number;
    };

    Complex operator+(const Complex &c1);
    //Division
    Complex operator/(const Complex &c1);

    Complex operator*(const Complex &c1) const;
    //friend Complex operator*(const Complex &c1, int number);

    Complex operator+=(const Complex &c1) const;
    Complex operator+(const Complex &c1) const; 

};

ostream& operator<<(ostream& os, const Complex &c);

//Warum muss ich das global machen ? 
Complex operator*(int , const Complex&);
Complex operator*( const Complex&, int);
//global

#endif // ComplexNum