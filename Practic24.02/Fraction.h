#pragma once
#include <iostream>
using namespace std;

class Fraction {
	int numerator;
	int denominator;
public :
	Fraction(int num, int denom) : numerator{ num }, denominator{ denom } {
		cout << "Fraction constructed for " << this << endl;
	}
	// конструктор делегирования
	Fraction(): Fraction{1,1}{}
	// конструктор копирования
	Fraction(const Fraction& f) : 
		numerator{ f.numerator },
		denominator{ f.denominator } {
		cout << "Fraction copy constructed for " << this << endl;
	}

	~Fraction() {
		cout << "Fraction destructor for " << this << endl;
	}

	void Print() {
		cout << numerator << " / " << denominator << endl;
	}
};