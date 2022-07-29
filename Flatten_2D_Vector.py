my_list = [ [1, 2], [3], [4, 5, 6], [7, [8, 9], [10]] ]

def flatten_array(my_list):

    result = []

    for item in my_list:

        if isinstance(item, list):

            flatten = flatten_array(item)
            result += flatten

        else:
            
            result.append(item)

    return result

print(flatten_array(my_list))
