#include<iostream>
#include "Fibonacci.hpp"
#include<vector>

int Fibonacci(int n) {
	
	std::vector<int> sequence(n);

	sequence[0] = 1;
	sequence[1] = 1;

	for(int i = 2; i < n; i++) {

		sequence[i] = sequence[i - 1] + sequence[i - 2];

	}

	return sequence[n - 1];

}