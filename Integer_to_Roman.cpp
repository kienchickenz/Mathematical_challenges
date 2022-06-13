#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<int> integer = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
	vector<string> roman = {"I", "IV", "V" ,"IX", "X", "XL", "L", "XC", "C" ,"CD", "D", "CM", "M"};

	int n;

	cout << "Hi, \n";
	cout << "Enter the number: ";
	cin >> n;

	string result;
	int a = n / 100;
	int b = ( n - a * 100 ) / 10;
	int c = n - ( a * 100 + b * 10 );

	int k;

	for(int i = 0; i < integer.size(); i++) {

		if(a * 100 == integer[i]) {

			result += roman[i];
			break;

		} else if(a * 100 < integer[i]) {

			k = a * 100 - integer[i - 1];
			k = k / 100;

			if(a > 5) {

				result += roman[i - 1];

				for(int j = 0; j < k; j++) {

					result += roman[8];

				}

			} else {
			
				for(int j = 0; j <= k; j++) {

					result += roman[i - 1];

				}

			}

			break;

		}

	}

	for(int i = 0; i < integer.size(); i++) {

		if(b * 10 == integer[i]) {

			result += roman[i];
			break;

		} else if(b * 10 < integer[i]) {

			k = b * 10 - integer[i - 1];
			k = k / 10;

			if(b > 5) {

				result += roman[i - 1];

				for(int j = 0; j < k; j++) {

					result += roman[4];

				}

			} else {

				for(int j = 0; j <= k; j++) {

					result += roman[i - 1];

				}

			}

			break;

		}

	}

	for(int i = 0; i < integer.size(); i++) {

		if(c == integer[i]) {

			result += roman[i];
			break;

		} else if(c < integer[i]) {

			k = c - integer[i - 1];

			if(c > 5) {

				result += roman[i - 1];

				for(int j = 0; j < k; j++) {

					result += roman[0];

				}

			} else {

				for(int j = 0; j <= k; j++) {

					result += roman[i - 1];

				}

			}

			break;

		}

	}

	std::cout << "The result is: " << result;

}
