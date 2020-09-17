
#include <iostream>
#include <cmath>
#include <cassert>
#include "Fraction.h"
using namespace std;

Fraction::Fraction( int num, int den)
{
    numer = num;
    denom = den;
    normalize();
}

Fraction::Fraction()
{
    numer = 0;
    denom = 1;
}

Fraction::Fraction( const Fraction& fract )
{
    numer = fract.getNumer();
    denom = fract.getDenom();
}


Fraction::~Fraction()
{
    
}

int Fraction::getNumer() const
{
    return numer;
}

int Fraction::getDenom() const
{
    return denom;
}

void Fraction::print() const
{
    cout<<numer<<"/"<<denom<<endl;
}

void Fraction::setNumer( int num )
{
    numer = num;
    normalize();
}

void Fraction::setDenom( int den )
{
    denom = den;
    normalize();
}

void Fraction::normalize()
{
    //denom = 0
    if ( denom == 0 )
    {
        cout<<"Invalid denomination. Need to quit."<<endl;
        assert( false );
    }
    //changing sign of denom
    if ( denom < 0 )
    {
        denom = -denom;
        numer = -numer;
    }
    //dividing numer and denom by gcd
    int divisor = gcd( abs( numer ), abs( denom ));
    numer = numer / divisor;
    denom = denom / divisor;
}

int Fraction::gcd( int n, int m )
{
    int gcd = 1;
    for ( int k = 1; k <= n && k <=m; k++ )
    {
        if ( n % k == 0 && m % k == 0 )
        {
            gcd = k;
        }
    }
    return gcd;
}
