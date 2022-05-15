#include "Fraction.h"

Fraction operator - (const Fraction& c, const Fraction& d)
{
	return Fraction(c.get_a() - d.get_a(), c.get_b() - d.get_b());

}

