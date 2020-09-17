
#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction
{
    private:
    //data members
        int numer;
        int denom;
    
    public:
    //constructors
        Fraction( int num, int den );
        Fraction();
        Fraction( const Fraction& fract );
        ~Fraction();
    //accessors
        int getNumer() const;
        int getDenom() const;
        void print () const;
    //mutators
        void setNumer( int num );
        void setDenom( int den );
    //helping private member functions
        void normalize();
        int gcd( int n, int m );
        
};

#endif 
