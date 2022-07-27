#include <iostream>
#include <vector>

// The idea: Based on numbers in the first row and the first column 
// to check if entire row or column = 0 or not;
// then check the first row and column seperately.
int main() {

	bool is_first_row;
	bool is_first_col;

	std::vector < std::vector <int> > matrix = { 
	    {0, 5, 6, 7, 8}, 
	    {4, 3, 3, 9, 2}, 
	    {5, 1, 2, 3, 7}, 
	    {9, 8, 4, 0, 3}, 
	    {5, 2, 5, 9, 2} 
	    
	};
 	
	// Check the first column
    for(int row = 0; row < matrix.size(); row++) {
            
        if(matrix[row][0] == 0) {
            
            is_first_col = true;
            
        }
        
    }
    
	// Check the first row
    for(int col = 0; col < matrix.size(); col++) {
        
        if(matrix[0][col] == 0) {
            
            is_first_row = true;
            
        }
        
    }

	// Check the rest of the matrix
 	for(int row = 1; row < matrix.size(); row++) {

 		for(int col = 1; col < matrix[0].size(); col++) {

 			if( matrix[row][col] == 0 ) {

 				matrix[0][col] = 0;
 				matrix[row][0] = 0;

 			}

 		}

 	}

	// Set rows to 0 based on its first number
	for(int row = 1; row < matrix.size(); row++) {

		if( matrix[row][0] == 0 ) {

			for(int col = 1; col < matrix[0].size(); col++) {

				matrix[row][col] = 0;

			}

		}

	}

	// Set columns to 0 based on its first number
	for(int col = 1; col < matrix[0].size(); col++) {

		if( matrix[0][col] == 0 ) {

			for(int row = 1; row < matrix.size(); row++) {

				matrix[row][col] = 0;

			}

		}

	}

	// Check and draw the first row
	if(is_first_row) {

		for(int col = 0; col < matrix[0].size(); col++) {

			matrix[0][col] = 0;

		}

	}

	// Check and draw the first column
	if(is_first_col) {

		for(int row = 0; row < matrix.size(); row++) {

			matrix[row][0] = 0;

		}

	}

	// Show the matrix
	std::cout << "The matrix: \n";

	for(int row = 0; row < matrix.size(); row++) {

		for(int col = 0; col < matrix[0].size(); col++) {

			std::cout << matrix[row][col] << " ";

		}
		
		std::cout << "\n";

	}

}
