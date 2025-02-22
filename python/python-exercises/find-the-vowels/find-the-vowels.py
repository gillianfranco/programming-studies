words = ('Horizon', 'Gear', 'Effervescent', 'Labyrinth', 'Aurora', 'Crystal', 'Eclipse', 'Vapor', 'Dew', 'Fragment')

vowels = []

for item in words:
    print(f'{item}: ', end='')
    for letter in item:
        if letter.upper() in 'AEIOU':
            print(letter.upper(), end=' ')
    print()
