def add_border(n) :
    name_size = len(n)

    print('+', '-' * name_size, '+')
    print('| ' + n + ' |')
    print('+', '-' * name_size, '+')

name = input("What's your name? ")

add_border(name)
