/*  See funktsioon tagastab kahe sisendi miinimumi
CPP failis on funktsiooni keha. */
#include <cmath>
#include <iostream>
#include "functions.h"

long minimum (long a, long b) { 
    if (a > b) 
        return b; 
    else 
        return a; 
}

long maximum (long a, long b) { 
    if (a > b) 
        return a; 
    else 
        return b; 
}

long product (long a, long b) {
    return a*b;
}

double power (long a, long b) {
    if (a > 0 && b > 0) {
        return pow(a,b);
    } else {
        return 0;
    }
}

// Greatest common divisor
// Recursive function to return gcd of a and b
// Euclidean algorithm .
long gcd (long a, long b) {
    if (b == 0) {
        return a;
    } 
    return gcd(b, a % b);
}

void all (long a, long b) {
    std::cout << a << " " << b << "\n";
    std::cout << minimum(a ,b) << "\n";
    std::cout << maximum(a ,b) << "\n";
    std::cout << product(a ,b) << "\n";
    std::cout << power(a ,b) << "\n";
    std::cout << gcd(a ,b) << std::endl;
}