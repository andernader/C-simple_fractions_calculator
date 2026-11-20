#include <stdio.h>
#include "f.h"

int gcd(int a, int b){
    int remainder;

    while(b != 0){
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

struct fraction simplify(struct fraction f1){
    int gcd_var = gcd(f1.num, f1.denom);
    f1.num /= gcd_var;
    f1.denom /= gcd_var;

    return f1;
}

struct fraction add_fractions(struct fraction f1, struct fraction f2){
    struct fraction result;
    result.num = f1.denom * f2.num + f2.denom * f1.num;
    result.denom = f1.denom * f2.denom;

    result = simplify(result);
    return result;
}

struct fraction substract_fractions(struct fraction f1, struct fraction f2){
    struct fraction result;
    result.num = f1.denom * f2.num - f2.denom * f1.num;
    result.denom = f1.denom * f2.denom;

    result = simplify(result);
    return result;
}

struct fraction multiply_fractions(struct fraction f1, struct fraction f2){
    struct fraction result;
    result.num = f1.num * f2.num;
    result.denom = f1.denom * f2.denom;

    result = simplify(result);
    return result;
}

struct fraction divide_fractions(struct fraction f1, struct fraction f2){
    struct fraction result;
    result.num = f1.num * f2.denom;
    result.denom = f1.denom * f2.num;

    result = simplify(result);
    return result;
}

void print_fraction(struct fraction f1, char msg[]){
    printf("%s = %d/%d\n", msg, f1.num, f1.denom);
    return;
}
