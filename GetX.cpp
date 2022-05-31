#include<iostream>
#include<vector>

int main() {

	int index;
	int n;
	int x;
	std::vector<int> number(n);

	std::cout << "Welcome!\n";
	std::cout << "How many numbers are there in your sequence?\n";
	std::cin >> n;
	std::cout << "List of numbers: ";

	// Input the sequence
	for(int i = 0; i < n; i++) {

		std::cin >> number[i];

	}

	// Show the sequence
	for(int i = 0; i < n; i++) {
			
		if( ( i + 1 ) == n ) {

			std::cout << number[i] << ".";
		
		}
			
		else {

			std::cout << number[i] << ", ";

		}

	}

	std::cout << "\nEnter the x(th):";
	std::cin >> x;


	// Find X
	if( x <= number.size() && x > 0 ) {

		for(int i = 0; i <= ( x - 1 ); i++) {
			
			if( ( i + 1 ) == x) {

				std::cout << "The " << x << "(th) number is: " << number[i] << ".";

			}
		}

	}

	else {

		std::cout << "0";

	}

}
