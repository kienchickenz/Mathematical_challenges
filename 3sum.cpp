#include<iostream>
#include<vector>
#include<algorithm>

int main() {

	std::vector<int> number = {3, 0, -1, 1, 2, -1 , -4, 34, 7, 9, 10, -6};

	int temp;

	int p1;
	int p2;
	int S;
	int a = 1;
	int index;

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

	for(int i = 0; i < number.size(); i++) {

		if(number[i] == 0) {

			index = i;
			break;

		}

	}

	while(p2 != 0) {

		p1 = number[ number.size() - a];
		p2 = number[ number.size() - 1 - a];

		S = p1 + p2;

		for(int i = 0; i < index; i++) {

			if(number[i] == -S && number[i] != number[i + 1]) {

				std::cout << number[i] << " " << p2 << " " << p1 << "\n"; 

			}

		}

		a++;

	}

}
