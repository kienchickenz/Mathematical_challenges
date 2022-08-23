def find_max(list, max = None):

    if len(list) == 0:

        return max

    if max == None or max < list[0]:

        max = list[0]

    return find_max(list[1:], max)

def largest_rectangle(list):

    result = []

    for i in range(len(list)):

        if i == 0:

            for j in range(len(list)):

                if list[i] > list[j]:
                
                    j -= 1
                    break
            
            width = j - i + 1
            area = list[i] * width
            result.append(area)

        elif i == len(list) - 1:

            for j in range((len(list) - 1), -1, -1):

                if list[i] > list[j]:

                    j += 1
                    break

            width = i - j + 1
            area = list[i] * width
            result.append(area)

        else:

            # Move forward
            for j in range(i, len(list), 1):

                if list[i] > list[j]:
                    
                    j -= 1
                    break

            # Move backward
            for k in range(i, -1, -1):

                if list[i] > list[k]:

                    k += 1
                    break

            width = j - k + 1
            area = list[i] * width
            result.append(area)

    return find_max(result)

def maximal_rectangle(list):

    result = []

    for row in range(0, len(list) - 1):

        for col in range(len(list[0])):

            if list[row + 1][col] != 0:

                list[row + 1][col] += list[row][col]

    for row in range(len(list)):

        result.append(largest_rectangle(list[row]))

    return find_max(result)

