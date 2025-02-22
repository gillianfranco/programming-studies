def sort_values(x = 0, y = 0, z = 0) :
    if x and y and z :
        if x > y and x > z :
            if y > z :
                print(f'{z} - {y} - {x}')
            else :
                print(f'{y} - {z} - {x}')
        elif y > x and y > z :
            if x > z :
                print(f'{z} - {x} - {y}')
            else :
                print(f'{x} - {z} - {y}')
        elif z > x and z > y :
            if x > y :
                print(f'{y} - {x} - {z}')
            else :
                print(f'{x} - {y} - {z}')

value1 = int(input('Enter the first value: '))
value2 = int(input('Enter the second value: '))
value3 = int(input('Enter the third value: '))

sort_values(value1, value2, value3)
