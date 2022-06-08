#include<iostream>
#include<vector>
#include<algorithm>

int main() {

	std::vector<int> number;
	int n;
	int z;

	int temp;

	int p1;
	int p2;
	int S12;
	int S_p;
	int target = 5;
	bool sum;

	// User's input
	std::cout << "Hi,\n";
	std::cout << "How long is your sequence?\n";
	std::cin >> n;
	std::cout << "Your target is: \n";
	std::cin >> target;

	std::cout << "Enter your sequence: \n";
	
	for(int i = 0; i < n; i++) {

		std::cin >> z;
		number.push_back(z);

	}

	// Arrange the sequence in an ascending order
	for(int i = 0; i < number.size(); i++) {

		for(int j = i + 1; j < number.size(); j++) {

			if(number[j] < number[i]) {

				temp = number[i];
				number[i] = number[j];
				number[j] = temp;

			}

		}

	}

	std::cout << "\nYour sequence is: ";

	// Print out the sequence
	for(int i = 0; i < number.size(); i++) {

		std::cout << number[i] << " ";

	}

	std::cout << "\nYour target is: " << target << "\n";

	// Iterate through the sequence with 2 pointers
	for(int i = 0; i < number.size() - 1; i++) {

		p1 = i + 1;
		p2 = number.size() - 1;
		S12 = target - number[i];

		while(p1 < p2) {

			S_p = number[p1] + number[p2];

			if(S_p > S12) {

				p2--;

			} else if(S_p < S12) {

				p1++;

			} else if(S_p == S12) {

				std::cout << number[i] << ", " << number[p1] << " and " << number[p2] << "\n";
				sum = true;
				p1++;

			}

		}

	}

	if(!sum) {

		std::cout << "False";

	}

}
