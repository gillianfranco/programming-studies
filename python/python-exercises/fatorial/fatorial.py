def is_positive(number) :
    if number < 0 :
        return False
    else :
        return True

def factorial(number) :
    fat = 1
    if number == 0 :
        return fat

    i = number

    while i > 1 :
        fat *= i
        i -= 1

    return fat

n = int(input('Enter a positive integer number: '))
validation = is_positive(n)

while not validation :
    n = int(input('Invalid number. Enter a positive integer number: '))
    validation = is_positive(n)

result = factorial(n)

print(f'The factorial of {n} is {result}.')
