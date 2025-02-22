n = int(input('Enter the number that will be multiplied: '))
limit = int(input('Enter the limit number that will be the last one multiplied by the other: '))

for i in range(limit + 1) :
    print(f'{n} * {i} = {n * i}')
