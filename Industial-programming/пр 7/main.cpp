#include "quadratic_equation.h"
#include <iostream>
#include <locale>

int main() {
	setlocale(LC_ALL, "");
	double a, b, c;
	std::cout << "Введите коэффиценты a, b, c: ";
	std::cin >> a >> b >> c;
	QuadraticEquation eq(a, b, c);
	eq.solve();
	return 0;
}