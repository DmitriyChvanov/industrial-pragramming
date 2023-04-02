#include "quadratic_equation.h"
#include <cmath>
#include <iostream>
#include <locale>


QuadraticEquation::QuadraticEquation(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void QuadraticEquation::solve() {
    setlocale(LC_ALL, "");

    double d = b * b - 4 * a * c;
    if (d < 0) {
        std::cout << "нет корней" << std::endl;
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        std::cout << "один корень: x = " << x << std::endl;
    }
    else {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "два корня: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
}