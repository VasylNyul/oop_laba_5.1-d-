#pragma once
#include "Pair.h"
class Fraction :
	public Pair
{
public:
	Fraction() : Pair(0, 0) {}
	Fraction(long a, short b) : Pair(a, b) {}
	Fraction(const Fraction& f) : Pair(f.get_a(), f.get_b()) {}

	friend Fraction operator - (const Fraction&, const Fraction&);

};

