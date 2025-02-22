i = 1

while True :
    try :
        name = input('Enter your name: ')
        index = int(input('Enter an index corresponding to a letter: '))
        print(f'The letter at position {index} is {name[index]}.')
        break
    except ValueError :
        print('Error! You entered a data type that is different from the expected one.')
    except IndexError :
        print('Error! The index you entered is invalid.')
    except :
        print('Something went wrong.')
    finally :
        print(f'Attempt {i}')
        i += 1
