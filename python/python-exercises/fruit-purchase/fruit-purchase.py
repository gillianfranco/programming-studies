apple_price = 2.30
orange_price = 3.60
banana_price = 1.85

choose = int(input('Press 1 to choose the apple;\nPress 2 to choose the orange;\nPress 3 to choose the banana.\n\nEnter here: '))
how_many = int(input('Enter the number of fruits do you want: '))

if choose == 1:
    total_price = apple_price * how_many
else:
    if choose == 2:
        total_price = orange_price * how_many
    else:
        if choose == 3:
            total_price = banana_price * how_many
        else:
            total_price = 0

print('\nYou have to pay R$%.2f.' % total_price)
