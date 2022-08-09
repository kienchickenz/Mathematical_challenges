my_weight = [4, 3, 1, 2, 3]
my_value = [5, 4, 2, 3, 2]
limit = 7

# Based on the matrix
def knapsack(my_weight, my_value, limit):

    my_row = len(my_weight) + 1 # = 6
    my_col = limit + 1 # = 8

    weight_result = []
    value_result = []
    
    # Create the matrix 
    my_matrix = [[0 for col in range(my_col)] for row in range(my_row)]

    for row in range(1, my_row):

        for col in range(1, my_col):

            my_matrix[row][col] = my_matrix[row - 1][col]
            
            if my_weight[row - 1] <= col:

                if my_matrix[row - 1][col - my_weight[row - 1]] + my_value[row - 1] > my_matrix[row - 1][col]:

                    my_matrix[row][col] = my_matrix[row - 1][col - my_weight[row - 1]] + my_value[row - 1]
    
    # Decide which things to take (start from bottom right of the matrix to the top left corner)
    final_col = limit
    
    for row in range(my_row - 1, 0, -1):

        if my_matrix[row][final_col] != my_matrix[row - 1][final_col]:

            value_result.append(my_value[row - 1])
            weight_result.append(my_weight[row - 1])

            final_col -= my_weight[row - 1]
    
    for row in range(0, my_row):
    
        print(my_matrix[row])

    print("Result: ", my_matrix[my_row - 1][my_col - 1])
    print("Weight: ", weight_result)
    print("Value : ", value_result)
