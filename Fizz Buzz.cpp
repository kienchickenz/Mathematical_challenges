#include <iostream>
#include <vector>
using namespace std;

int  main() {

	int n;

	cout << "Hi, \n";
	cout << "Enter the n: ";
	cin >> n;

	for(int i = 1; i <= n; i++) {

		if(i % 15 == 0) {

			cout << "FizzBuzz" << " ";

		} else if(i % 3 == 0 && i % 5 != 0) {

			cout << "Fizz" << " ";

		} else if(i % 3 != 0 && i % 5 == 0) {

			cout << "Buzz" << " ";

		} else {

			cout << i << " ";

		}

	}

}