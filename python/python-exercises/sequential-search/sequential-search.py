def search_value(list_of_values, value):
    index = 0
    for item in list_of_values:
        if value == item:
            return index
        index += 1
    return -1

values = [85, 2, 17, 71, 14, 19, 56, 47, 91]

data = int(input('Enter a positive integer: '))

result = search_value(values, data)

if result >= 0:
    print(f'The value is in position {result} of the list.')
else:
    print(f"The value wasn't found.")
