#include<iostream>
#include<vector>

int main() {

	int p1, p2;
	int temp;
	int n;
	int target;
	int S;
	int z;
	bool sum;

	std::vector<int> number;

	// User's input
	std::cout << "Hi,\n";
	std::cout << "Your target is: \n";
	std::cin >> target;

	std::cout << "How long is your sequence?\n";
	std::cin >> n;

	std::cout << "Enter your sequence: \n";
	
	for(int i = 0; i < n; i++) {

		std::cin >> z;
		number.push_back(z);

	}

	// Arrange the sequence in an ascending order
	for(int i = 0; i < number.size(); i++) {

		for(int j = i + 1; j < number.size(); j++) {

			if( number[i] > number[j] ) {

				temp = number[i];
				number[i] = number[j];
				number[j] = temp;

			}

		}

	}

	std::cout << "\n";
	std::cout << "Your sequence is: ";

	// Print out the sequence
	for(int i = 0; i < number.size(); i++) {

		std::cout << number[i] << " ";

	}

	std::cout << "\n";

	// Iterate through the loop using 2 pointers
	p1 = 0;
	p2 = number.size() - 1;
	
	while(p1 != p2) {

		S = number[p1] + number[p2];

		if(S > target) {

			p2--;

		} else if(S == target) {

			std::cout << number[p1] << " and " << number[p2] << "\n";
			p2--;
			sum = true;

		} else {

			p1++;

		}

	}

	if(!sum) {

		std::cout << "False";

	}

}