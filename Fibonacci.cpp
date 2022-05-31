#include<iostream>
#include<vector>

int main() {

	int n;

	std::cout << "Welcome to the Fibonacci sequence,\n";
	std::cout << "Enter the n(th): ";
	std::cin >> n;
	
	std::vector<int> sequence(n);

	sequence[0] = 1;
	sequence[1] = 1;

	for(int i = 2; i < n; i++) {

		sequence[i] = sequence[i - 1] + sequence[i - 2];

	}

	std::cout << "\nThe " << n << "th number is " << Fibonacci(n);

}

