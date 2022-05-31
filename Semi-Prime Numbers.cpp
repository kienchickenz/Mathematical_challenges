#include<iostream>
#include<vector>

int main() {

	int n;

	std::cout << "Hi,\n";
	std::cout << "Enter the n: ";
	std::cin >> n;

	int num = 0;
	int a = 1;
	int S = 0;
	bool repeat;
	
	int max;
	int temp;

	std::vector<int> prime = {2, 3, 5, 7, 9, 11, 13, 17, 19};
	std::vector<int> number;
	std::vector<int> result;

	// Create the sequence with n numnbers
	for(int i = 0; i < n; i++) {

		num = num + 1;
		number.push_back(num);

	}

	for(int i = 0; i < prime.size(); i++) {

		for(int j = 0; j < prime.size(); j++) {

			// Select every number of the sequence i and multiply with every number of sequence j 
			// => There will be a lot of repeated numbers as the sequence grow. How to remove them?
			a = prime[i] * prime[j];

			// Create the limit
			if(a <= n) {

				if(i == 0) {

					result.push_back(a);
					S++;
					a = 1;

				// After finishing the first loop of a, 
				// we then compare every behind loop of a to the result to know whether it is repeated or not.
				} else {

					repeat = false;

					for(int k = 0; k < result.size(); k++) {

						if(result[k] == a) {

							repeat = true;
							break;

						}

					}

					if(!repeat) {

						result.push_back(a);
						S++;
						a = 1;

					}

				}

			} else {

				break;

			}

		}

	}

	// Arrange the sequence in ascending order
	max = result[0];

	for(int i = 0; i < result.size() - 1; i++) {

		if( result[i] < result[i + 1] ) {

			max = result[i + 1];

		} else if( result[i] == result[i + 1] ) {

			continue;

		} else {

			result[i] = result[i + 1];
			result[i + 1] = max;

		}

	}

	// Printting parts
	std::cout << "\nThe sequence to n: ";

	for(int i = 0; i < n; i++) {

		std::cout << number[i] << " ";

	}

	std::cout << "\nThe semi-prime numbers from the sequence: ";

	for(int i = 0; i < result.size(); i++) {

		std::cout << result[i] << " ";

	}

	std::cout << "\nThere are " << S << " numbers.";

}
