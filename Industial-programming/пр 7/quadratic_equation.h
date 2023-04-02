#pragma once
#ifndef QUADRATIC_EQUATION
#define QUADRATIC_EQUATION

class QuadraticEquation {
private:
    double a, b, c;
public:
    QuadraticEquation(double a, double b, double c);
    void solve();
};

#endif
