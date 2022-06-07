#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> number;
	int z, n;

	int p1, p2;
	int S, S12;
	int temp;
	int target = 10;
	bool sum = false;

	// User's input
	cout << "Hi,\n";
	cout << "How long is your sequence?\n";
	cin >> n;
	cout << "Your target is: \n";
	cin >> target;

	cout << "Enter your sequence: \n";
	
	for(int i = 0; i < n; i++) {

		std::cin >> z;
		number.push_back(z);

	}

	// Arrange the sequence
	for(int i = 0; i < number.size(); i++) {

		for(int j = i + 1; j < number.size(); j++) {

			if( number[i] > number[j] ) {

				temp = number[i];
				number[i] = number[j];
				number[j] = temp;

			}

		}

	}

	// Display the sequence
	cout << "\nYour sequence is: ";

	for(int i = 0; i < number.size(); i++) {

		cout << number[i] << " ";

	}

	cout << "\n";
	cout << "Your target is " << target; 
	cout << "\n";

	// Loop through the 2 close number of the sequence then iterate through the vector using 2 pointers
	// i < number.size() - 3: Avoid duplicate number
	for(int i = 0; i < number.size() - 3; i++) {

		// i = j + 1: Avoid duplicate number
		for(int j = i + 1; j < number.size() - 2; j++) {

			p1 = j + 1;
			p2 = number.size() - 1;
			S = target - number[i] - number[j]; 

			while(p1 < p2) {

				S12 = number[p1] + number[p2];

				if( S12 == S ) {

					cout << number[i] << ", " << number[j] << ", " << number[p1] << " and " << number[p2] << "\n";
					p2--; 
					sum = true;

				} else if( S12 > S ) {

					p2--;

				} else {

					p1++;

				}

			}

		}

	}

	if(!sum) {

		cout << "False";

	}

}