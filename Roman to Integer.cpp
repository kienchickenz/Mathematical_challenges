#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> integer = {1, 5, 10, 50, 100, 500, 1000};
	vector<string> roman = {"I", "V", "X", "L", "C", "D", "M"};

	string input;

	cout << "Hi,\n";
	cout << "Enter the number: ";
	cin >> input;

	int result = 0;

	for(int i = input.size() - 1; i >=0; i--) {

		switch(input[i]) {

			case 'I':
				
				if(result < 5) {

					result += 1;
					break;

				} else {

					result -= 1;
					break;

				}

			case 'V':

				result += 5;
				break;

			case 'X':

				if(result < 50) {

					result += 10;
					break;

				} else {

					result -= 10;
					break;

				}

			case 'L':

				result += 50;
				break;

			case 'C':

				if(result < 500) {

					result += 100;
					break;

				} else {

					result -= 100;
					break;

				}

			case 'D':

				result += 500;
				break;

			case 'M':

				result += 1000;
				break;

		}

	}

	cout << "The result is " << result;

}
