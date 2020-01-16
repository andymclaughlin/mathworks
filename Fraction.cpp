#include <iostream>
#include <algorithm>
#include "Fraction.h"
#include <stdexcept>

using namespace std;

Fraction::Fraction(int num, int denom){
    
    if(denom == 0){
        throw std::overflow_error("Divide by zero exception");
    }

    //standardize fraction by reducing and making denominator positive
    if(denom < 0){
        num = num * -1;
        denom = denom * -1;
    }

    int gcd = __gcd(num, denom);

    if(gcd > 1){
        num = num / gcd;
        denom = denom / gcd;
    }

    this->n = num;
    this->d = denom;
}

int Fraction::getN() const{
    return this->n;
}

int Fraction::getD() const{
    return this->d;
}

Fraction Fraction::operator + (Fraction const &f) {
    int lcm = this->d * f.getD() / __gcd(this->d, f.getD());
    int f1 = lcm / this->d;
    int f2 = lcm / f.getD();
    Fraction o = Fraction(this->n * f1 + f.getN() * f2, lcm);
    return o;           
}

Fraction Fraction::operator - (Fraction const &f) {
    Fraction o = Fraction(this->n, this->d) + Fraction(f.getN()* - 1, f.getD());
    return o;           
}

Fraction Fraction::operator * (Fraction const &f) {
    Fraction o = Fraction(this->n * f.getN(), this->d * f.getD());
    return o;           
}

Fraction Fraction::operator / (Fraction const &f) {
    Fraction o = Fraction(this->n, this->d) * Fraction(f.getD(), f.getN()); 
    return o;           
}

bool Fraction::operator == (Fraction const &f) {
    return(this->n == f.getN() & this->d == f.getD());

}
bool Fraction::operator < (Fraction const &f) {
    return(this->n *  f.getD() < f.getN() * this->d); 
}


bool Fraction::operator > (Fraction const &f) {
    return (Fraction(f.getN(), f.getD()) <  Fraction(this->n, this->d));
}

void Fraction::Print() const {
    std::cout << this->n <<  "/" << this->d << "\n";    

}      

