def multiply(n1, n2) :
    return n1 * n2

def divide(n1, n2) :
    return n1 / n2

def add(n1, n2) :
    return n1 + n2

def subtract(n1, n2) :
    return n1 - n2

print('CALCULATOR:\n')
print('(*) Multiplication')
print('(/) Division')
print('(+) Addition')
print('(-) Subtraction')

operation = input('Enter the symbol corresponding to the desired mathematical operation: ')

number1 = float(input('Enter the first number: '))
number2 = float(input('Enter the second number: '))

if operation == '*':
    print('The multiplication of %.2f and %.2f is %.2f.' % (number1, number2, multiply(number1, number2)))
elif operation == '/':
    print('The division of %.2f and %.2f is %.2f.' % (number1, number2, divide(number1, number2)))
elif operation == '+':
    print('The addition of %.2f and %.2f is %.2f.' % (number1, number2, add(number1, number2)))
elif operation == '-':
    print('The subtraction of %.2f and %.2f is %.2f.' % (number1, number2, subtract(number1, number2)))
else:
    print('The operation you chose is invalid.')
