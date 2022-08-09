def most_water(my_list):

    pointer_left = 0
    pointer_right = len(my_list) - 1

    water = 0
    maximum = 0
    
    while pointer_left != pointer_right:

        if my_list[pointer_left] >= my_list[pointer_right]:

            water = my_list[pointer_right] * (pointer_right - pointer_left)

            if water > maximum:

                maximum = water
                
            pointer_right -= 1

        elif my_list[pointer_left] < my_list[pointer_right]:

            water = my_list[pointer_left] * (pointer_right - pointer_left)

            if water > maximum:

                maximum = water
                
            pointer_left += 1

    return maximum
