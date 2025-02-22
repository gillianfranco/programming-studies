number_1 = float(input('Enter the first number: '))
number_2 = float(input('Enter the second number: '))

i = 1
result = 0

while i <= number_2 :
    result = result + number_1
    i = i + 1

print('The result is %.2f' % result)
