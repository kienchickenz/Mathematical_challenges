#include <iostream>
#include<vector>
using namespace std;

int main() {

	// Using 2 pointers
	int pointer = 0;

	vector<int> number = {5, 9, 0, 0, 0, 3, 4, 0, 7};

	// To see if the first index is 0 or not
	for(int i = 0; i < number.size(); i++) {

		if(number[i] == 0) {

			pointer = i;
			break;

		}

	}

	// 2 pointers are i and pointer
	for(int i = 0; i < number.size(); i++) {

		if(number[i] != 0 && i > pointer) {

			number[pointer] = number[i];
			number[i] = 0;
			pointer++;

		}

	}

	// Display the vector
	for(int i = 0; i < number.size(); i++) {

		cout << number[i] << " ";

	}

}
