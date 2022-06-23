#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n;

	cout << "Enter the n: ";
	cin >> n;

	vector<int> number(n);
	number[0] = 1;
	number[1] = 1;

	for(int i = 2; i < n; i++) {

		number[i] = number[i - 1] + number[i - 2];

	}

	cout << "There are " << number[n - 1] << " ways.";

}
