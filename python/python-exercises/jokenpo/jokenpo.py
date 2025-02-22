import random

def validation_choose(question, minimum, maximum):
    while True:
        try:
            option = int(input(question))
            while option < minimum or option > maximum:
                option = int(input('Invalid option. Try again: '))
            return option
        except ValueError:
            print('Enter only integer numbers.')

result = []

rounds = 0
wins_user = 0
wins_computer = 0
draws = 0

while True:
    print('0-Leave')
    print('1-Rock')
    print('2-Paper')
    print('3-Scissors')

    choose_user = validation_choose('Enter a number corresponding to the option: ', 0, 3)
    print()
    if not choose_user:
        break
    choose_computer = random.randint(1, 3)

    result.append([choose_user, choose_computer])

    rounds += 1

for item in result:
    if item[0] == 1 and item[1] == 2:
        wins_computer += 1
    elif item[0] == 1 and item[1] == 3:
        wins_user += 1
    elif item[0] == 2 and item[1] == 3:
        wins_computer += 1
    elif  item[0] == 2 and item[1] == 1:
        wins_user += 1
    elif item[0] == 3 and item[1] == 1:
        wins_computer += 1
    elif item[0] == 3 and item[1] == 2:
        wins_user += 1
    else:
        draws += 1

if wins_user > wins_computer:
    print('You won! Congratulations!')
elif wins_computer > wins_user:
    print('You lose! Try again.')
else:
    print('Draw!')

print(f'\nUser victories: {wins_user}')
print(f'Computer victories: {wins_computer}')
print(f'Draws: {draws}')
