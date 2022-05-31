#include<iostream>
#include<vector>

int main() {

	int S;
	int n;
	int num;

	// Introduction
	std::vector<int> number;
	std::vector<int> result;

	std::cout << "Hi there,\n";
	std::cout << "How long is your sequence?\n";
	std::cin >> n;
	std::cout << "Enter your sequence: ";

	for(int i = 0; i < n; i++) {

		std::cin >> num;
		number.push_back(num);

	}

	// Body
	for(int i = 0; i < number.size(); i++) {

		// Reset the product
		S = 1;

		for(int j = 0; j < number.size(); j++) {

			if(number[j] != number[i]) {

				S = S * number[j]; 

			}	

		}

		result.push_back(S);

	}

	// Finals
	std::cout << "Your sequence is: ";

	for(int i = 0; i < number.size(); i++) {

		std::cout << number[i] << " ";

	}

	std::cout << "\nThe sequence with products of everything except self is: ";

	for(int i = 0; i < result.size(); i++) {

		std::cout << result[i] << " ";

	}

}