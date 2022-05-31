#include<iostream>
#include "Fibonacci.hpp"

int main() {

	int n;

	std::cout << "Welcome to the Fibonacci sequence,\n";
	std::cout << "Enter the n(th): ";
	std::cin >> n;

	std::cout << "\nThe " << n << "th number is " << Fibonacci(n);

}

