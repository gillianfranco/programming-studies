number = int(input('Enter a number: '))

i = 1
quantity = 0
quantity_limit = 10

print(f'Multiples of {number}:')

while quantity < quantity_limit :
    if i % number == 0 :
        print(i)
        quantity += 1
    i += 1