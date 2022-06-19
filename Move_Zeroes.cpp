#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;
	int a;

	cout << "Hi, \n";
	cout << "Enter the size: ";
	cin >> n;

	// Fill the vector with random numbers
	vector<int> number;

	srand(time(0));

	for(int i = 0; i < n; i++) {

		a = rand() % 20;
		number.push_back(a);

	}

	// Remove and insert 0 to the very end of the vector
	for(int i = 0; i < n; i++) {

		if(number[i] == 0) {

			number.erase(number.begin() + i);
			number.push_back(0);

		}

	}

	// Arrange the vector in the ascending order
	int temp;

	for(int i = 0; i < number.size(); i++) {

		for(int j = i + 1; j < number.size(); j++) {

			if(number[j] != 0) {

				if(number[i] > number[j]) {

					temp = number[i]; 
					number[i] = number[j];
					number[j] = temp;

				}

			}

		}

		if(number[i] == 0) {

			break;

		}

	}

	// Display the vector
	for(int i = 0; i < number.size(); i++) {

		cout << number[i] << " ";

	}

}
