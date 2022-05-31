#include<iostream>
#include<vector>

int main() {

	std::cout << "Hi Kiendz,\n";

	std::vector <double> info(8);

	std::cout << "Enter the sequence(8 numbers): ";
	std::cin >> info[0];
	std::cin >> info[1];
	std::cin >> info[2];
	std::cin >> info[3];
	std::cin >> info[4];
	std::cin >> info[5];
	std::cin >> info[6];
	std::cin >> info[7];
	std::cout << "Your sequence is: \n";

	for(int i = 0; i < 8; i++) {

		std::cout << info[i] << " ";

	}

	std::cout << "\n";

	double max = info[0];
	double min = info[0];

	for(int i = 0; i < 8; i++) {

		if(max < info[i]) {

			max = info[i];

		}

	}

	for(int i = 0; i < 8; i++) {

		if(min > info[i]) {
			
			min = info[i];

		}

	}	

	std::cout << "The biggest number is: " << max << "\n";
	std::cout << "The smallest number is: " << min << "\n";

}