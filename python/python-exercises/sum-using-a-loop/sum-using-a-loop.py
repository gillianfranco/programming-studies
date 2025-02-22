total = 0
i = 0
leave = 0

while not leave :
    n = int(input('Enter a number: '))
    if n <= 0 :
        print('\nEnter a number greater then zero.')
        continue
    total += n
    i += 1

    while True :
        leave = int(input('Enter 0 to continue or 1 to finish: '))
        if leave != 0 and leave != 1 :
            continue
        else :
            break

average = total / i

print(f'\nTotal of numbers: {i}')
print(f'Sum: {total}')
print(f'Average: {average:.2f}')
