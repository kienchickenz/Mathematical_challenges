#include <iostream>
#include <vector>
using namespace std;

int main() {

	string input; // Direction
	int temp;

	int n; // Size of vector

	// User's input
	cout << "Hi, \n";
	cout << "Enter the size: ";
	cin >> n;

	// Create and fill the vector
	vector<vector <int> > matrix(n);
	vector<int> number;

	for(int i = 1; i <= n * n; i++) {

		number.push_back(i);

	}

	for(int row = 0; row < n; row++) {

		for(int i = 0; i < n; i++) {

			matrix[row].push_back(number[i]);

			if(matrix[row].size() == n) {

				number.erase(number.begin(), number.begin() + n);

			}

		}

	}	

	// User's input
	cout << "Enter direction: ";
	cin >> input;
	cout << "\n";

	// Direction of the rotation
	if(input == "right") {

		if(n % 2 == 0) {

			// ONLY iterate n/4 numbers (1/4 of the square)
			for(int row = 0; row < n / 2; row++) {

				for(int col = 0; col < n / 2; col++) {

					temp = matrix[row][col];
					matrix[row][col] = matrix[n - 1 - col][row]; // Front column -> Front row
					matrix[n - 1 - col][row] = matrix[n - 1 - row][n - 1 - col]; // Back row -> Front column
					matrix[n - 1 - row][n - 1 - col] = matrix[col][n - 1 - row]; // Back column -> Back row
					matrix[col][n - 1 - row] = temp; // Front row -> Back column

				}

			}

		} else if(n % 2 != 0) {

			// ONLY iterate n/4 numbers (1/4 of the square)
			for(int row = 0; row < n / 2 + 1; row++) {

				for(int col = 0; col < n / 2; col++) {

					temp = matrix[row][col];
					matrix[row][col] = matrix[n - 1 - col][row]; // Front column -> Front row
					matrix[n - 1 - col][row] = matrix[n - 1 - row][n - 1 - col]; // Back row -> Front column
					matrix[n - 1 - row][n - 1 - col] = matrix[col][n - 1 - row]; // Back column -> Back row
					matrix[col][n - 1 - row] = temp; // Front row -> Back column

				}

			}

		}

	// Direction of the rotation
	} else if(input == "left") {

		if(n % 2 == 0) {

			// ONLY iterate n/4 numbers (1/4 of the square)
			for(int row = 0; row < n / 2; row++) {

				for(int col = 0; col < n / 2; col++) {

					temp = matrix[row][col]; 
					matrix[row][col] = matrix[col][n - 1 - row]; // Back column -> Front row 
					matrix[col][n - 1 - row] = matrix[n - 1 - row][n - 1 - col]; // Back row -> Back column
					matrix[n - 1 - row][n - 1 - col] = matrix[n - 1 - col][row]; // Front column -> Back row
					matrix[n - 1 - col][row] = temp; // Front row -> Front column

				}

			}

		} else if(n % 2 != 0) {

			// ONLY iterate n/4 numbers (1/4 of the square)
			for(int row = 0; row < n / 2 + 1; row++) {

				for(int col = 0; col < n / 2; col++) {

					temp = matrix[row][col]; 
					matrix[row][col] = matrix[col][n - 1 - row]; // Back column -> Front row 
					matrix[col][n - 1 - row] = matrix[n - 1 - row][n - 1 - col]; // Back row -> Back column
					matrix[n - 1 - row][n - 1 - col] = matrix[n - 1 - col][row]; // Front column -> Back row
					matrix[n - 1 - col][row] = temp; // Front row -> Front column

				}

			}		

		}

	}

	// Display the matrix
	for(int row = 0; row < matrix.size(); row++) {

		for(int col = 0; col < matrix.size(); col++) {

			cout << matrix[row][col] << " ";

		}

		cout << "\n";

	}

}
