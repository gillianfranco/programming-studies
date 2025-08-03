def findSmallest(arr):
    smallest = arr[0]
    smallest_index = 0

    for i in range(1, len(arr)):
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    
    return smallest_index

def selectionSort(arr):
    new_arr = []

    for i in range(len(arr)):
        index = findSmallest(arr)
        new_arr.append(arr.pop(index)) # Remove the smallest element from 'arr' and add it to 'new_arr'

    return new_arr

print(selectionSort([5, 3, 6, 2, 10]))
