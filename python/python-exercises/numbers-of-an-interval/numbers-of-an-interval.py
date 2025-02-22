initial = int(input('What value do you want to start with? '))
final = int(input('What value do you want to finish with? '))

i = initial
quantity_natural_numbers = 0
quantity_evens = 0
quantity_odds = 0
sum_natural_numbers = 0
sum_evens = 0
sum_odds = 0

if initial < final:
    while i <= final :
        if i > 0 :
            quantity_natural_numbers += 1
            sum_natural_numbers += i
        if i % 2 == 0 :
            quantity_evens += 1
            sum_evens += i
        else :
            quantity_odds += 1
            sum_odds += i
        i = i + 1

    print('\nTotal of natural numbers: %d.' % quantity_natural_numbers)
    natural_numbers_average = sum_natural_numbers / quantity_natural_numbers
    print('Average of the natural numbers: {}'.format(natural_numbers_average))

    print('\nTotal of evens: %d.' % quantity_evens)
    evens_average = sum_evens / quantity_evens
    print('Average of the evens: {}'.format(evens_average))

    print('\nTotal of odds: %d.' % quantity_odds)
    odds_average = sum_odds / quantity_odds
    print('Average of the odds: {}'.format(odds_average))
else:
    print('Invalid interval. You entered an initial value greater than or equal to the final value.')
