/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Author: Bridget Naylor
Date: Sept 17, 2020
Lab: Fractions
*/
#include <stdio.h>
#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction& multiplyFract( Fraction& fr1, Fraction& fr2 )
{
    Fraction *fr1Pointer;
    fr1Pointer = &fr1;//points to address of fr1
    Fraction fr1Value;
    fr1Value = *fr1Pointer;//value = value held at pointer 1 address
    
    Fraction *fr2Pointer;
    fr2Pointer = &fr2;//points to address of fr2
    Fraction fr2Value;
    fr2Value = *fr2Pointer;//value = value held at pointer 2 address
    

    int newNumer = fr1Value.getNumer() * fr2Value.getNumer();
    int newDenom = fr1Value.getDenom() * fr2Value.getDenom();

    
    Fraction multiplied( newNumer, newDenom );

    Fraction &multipliedRef = multiplied;


    return multipliedRef;
    
}

int main()
{
   // Instantiation of some objects
    Fraction fract1 ;
    Fraction fract2 (14, 21);
    Fraction fract3 (11, -8);
    Fraction fract4 (fract3);
    //Fraction fract5(2,0);
    
    // Printing the object
    cout << "Printing four fractions after constructed: " << endl;
    cout << "fract1: ";
    fract1. print();
    cout << "fract2: ";
    fract2. print();
    cout << "fract3: ";
    fract3. print();
    cout << "fract4: ";
    fract4. print();
    cout << "fract5: ";
    //fract5.print();

    // Using mutators
    cout << "Changing the first two fractions and printing them:";
    cout << endl;
    fract1.setNumer(4);
    cout << "fract1: ";
    fract1.print();
    fract2.setDenom(-5);
    cout << "fract2: ";
    fract2.print();

    // Using accessors
    cout << "Testing the changes in two fractions:" << endl;
    cout << "fract1 numerator: " << fract1.getNumer() << endl;
    cout << "fract2 denominator: " << fract2.getDenom() << endl;
    
    Fraction fraction1( 1, 2 );
    Fraction fraction2( 2, 3 );
    
    Fraction &f1Ref = fraction1;
    Fraction &f2Ref = fraction2;
    
    cout<<"Multiply: ";
    fraction1.print();
    cout<<" by ";
    fraction2.print();
    cout<<" and get ";
    Fraction & REF = multiplyFract( f1Ref, f2Ref );
    
    Fraction *frMulPointer;
    frMulPointer = &REF;//points to address of REF
    Fraction frMulValue;
    frMulValue = *frMulPointer;//value = value held at REF address
    
    frMulValue.print();
    return 0;
}
