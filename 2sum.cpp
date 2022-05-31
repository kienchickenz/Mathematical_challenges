#include<iostream>
#include<vector>

int main() {

	int n;
	int a;
	int b;
	std::vector<int> number;

	std::cout << "Enter the n: ";
	std::cin >> n;

	std::cout << "\nHow many numbers are there in your sequence?";
	std::cin >> a;

	std::cout << "\nEnter your sequence: ";

	for(int i = 0; i < a; i++) {

		std::cin >> b;
		number.push_back(b);

	}

	std::cout << "\nThe numbers whose their sum = " << n << ":\n";

	// Add every number of the sequence to all numbers of another sequence
	for(int i = 0; i < number.size(); i++) {

		for(int j = 0; j < number.size(); j++) {

			// To stop duplicate the previous numbers
			if(j > i) {

				if( number[i] + number[j] == n ) {

					std::cout << number[i] << " and " << number[j] << "\n";

				} 

			}

		}

	}

}