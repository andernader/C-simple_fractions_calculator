#ifndef F_H
#define F_H

#include "struct.h"

int gcd(int a, int b);
struct fraction simplify(struct fraction f1);
struct fraction add_fractions(struct fraction f1, struct fraction f2);
struct fraction substract_fractions(struct fraction f1, struct fraction f2);
struct fraction multiply_fractions(struct fraction f1, struct fraction f2);
struct fraction divide_fractions(struct fraction f1, struct fraction f2);
void print_fraction(struct fraction f1, char msg[]);
#endif // F_H
