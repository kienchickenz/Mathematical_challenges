#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;

	cout << "Hi, \n";
	cout << "Enter the n: ";
	cin >> n;

	int temp = 0;

	while(n != 0) {

		temp = temp * 10 + n % 10; // Append the last digit of n

		n = n / 10; // Remove the last digit of n

	}

	cout << "The result: " << temp;

}
