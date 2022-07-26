#include <iostream>
#include <vector>
using namespace std;

int main() {

    int m, n;

    cout << "Enter the size of the matrix m x n\n";
    cout << "m: ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    vector<vector <int> > matrix(m);

    int i = 1;

    for(int row = 0; row < m; row++) {

        for(int col = 0; col < n; col++) {

            matrix[row].push_back(i);
            i++;

        }

    }

    int direction = 0;  
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while(top <= bottom) {

        if(direction == 0) {

            for(int i = left; i <= right; i++) {

                cout << matrix[top][i] << " ";

            }

            top++;

            direction++;

        } else if(direction == 1) {

            for(int i = top; i <= bottom; i ++) {

                cout << matrix[i][right] << " ";

            }

            right--;

            direction++;

        } else if(direction == 2) {

            for(int i = right; i >= left; i--) {

                cout << matrix[bottom][i] << " ";

            }

            bottom--;

            direction++;

        } else if(direction == 3) {

            for(int i = bottom; i >= top; i--) {

                cout << matrix[i][left] << " ";

            }

            left++;

            direction -= 3;

        }

    }

}