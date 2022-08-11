def product_except_self(my_list):

    product_left = []
    product_right = []

    product_left.append(my_list[0])

    for i in range(0, len(my_list) - 1):

        item = product_left[i] * my_list[i + 1]
        product_left.append(item)

    product_right.append(my_list[len(my_list) - 1])
    
    for i in range(len(my_list) - 1, 0, -1):

        item = product_right[0] * my_list[i - 1]
        product_right.insert(0, item)

    result = []

    for index in range(len(my_list)):

        if index == 0:

            item = product_right[index + 1]
            result.append(item)

        elif index == len(my_list) - 1:

            item = product_left[index - 1]
            result.append(item)

        else:

            item = product_left[index - 1] * product_right[index + 1]
            result.append(item)

    return result