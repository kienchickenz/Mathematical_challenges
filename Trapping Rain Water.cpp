#include<iostream>
#include<vector>

int main() {

	std::vector<int> number = {2, 0, 1, 3};

	// Using 2 pointers to iterate through the vector
	int pointer_right = number.size() - 1;
	int pointer_left = 0;
	
	int bound_right = 0; 
	int bound_left = 0;

	int water = 0;
	int rain = 0;

	while(pointer_left < pointer_right) {

		if(number[pointer_right] > number[pointer_left]) {

			if(number[pointer_left] > bound_left) {

				bound_left = number[pointer_left];

			}

			water = bound_left - number[pointer_left];
			rain = rain + water;
			pointer_left++;

		}

		else {

			if(number[pointer_right] > bound_right) {

				bound_right = number[pointer_right];

			}

			water = bound_right - number[pointer_right];
			rain = rain + water; 
			pointer_right--;

		}

	}

	for(int i = 0; i < number.size(); i++) {

		std::cout << number[i] << " ";

	}

	std::cout << "\n" << rain; 

}
