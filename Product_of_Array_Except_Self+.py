def product_except_self(my_list):

    result = []
    result.append(my_list[len(my_list) - 1])

    for i in range(len(my_list) - 2, 0, -1):

        item = result[0] * my_list[i]
        result.insert(0, item)

    # Left pointer works as a list which traverse to the end of the main list 
    # => Update the pointer after every turn.
    left_pointer = 1

    for i in range(len(my_list)):

        if i == 0:

            item = result[0]
            result.insert(0, item)

            left_pointer *= my_list[i]

        elif i == len(my_list) - 1:

            item = left_pointer
            result.insert(i, item)
            result.pop(i + 1)

        else:

            item = left_pointer * result[i + 1]
            left_pointer *= my_list[i]
            result.insert(i, item)
            result.pop(i + 1)

    return result
