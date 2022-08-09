def find_max(my_list, max = None):

    if len(my_list) == 0:

        return max

    if max == None or max < my_list[0]:

        max = my_list[0]

    return find_max(my_list[1:], max)

# AT LEAST one bar is fully included in the largest rectangle
# => Find areas of all largest rectangles for each bar being included full.
def largest_area(my_histogram):

    # Find the largest rectangles for each bar being included full
    result = []

    for i in range(len(my_histogram)):

        if i == 0:

            for j in range(i, len(my_histogram)):

                if my_histogram[j] < my_histogram[i]:

                    j -= 1
                    break

            width = j - i + 1
            area = my_histogram[i] * width
            result.append(area)

        elif i == len(my_histogram) - 1:

            for j in range(i, -1, -1):

                if my_histogram[j] < my_histogram[i]:

                    j += 1
                    break

            width = i - j + 1
            area = my_histogram[i] * width
            result.append(area)

        else:

            for j in range(i , -1, -1):

                if my_histogram[j] < my_histogram[i]:
                    
                    j += 1
                    break

            for k in range(i, len(my_histogram)):

                if my_histogram[k] < my_histogram[i]:

                    k -= 1
                    break

            width = k - j + 1
            area = my_histogram[i] * width
            result.append(area)

    return find_max(result)
