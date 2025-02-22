initial = int(input('Enter the initial hour: '))

while initial < 0 or initial > 23 :
    print('Enter a value between 0 and 23 hours.')
    initial = int(input('Enter the initial hour: '))

final = int(input('Enter the final hour: '))

while final < 0 or initial > 23 or final < initial :
    if final < 0 or initial > 23 :
        print('Enter a value between 0 and 23 hours.')
    if final < initial :
        print('Enter a value greater then the initial hour.')

    final = int(input('Enter the final hour: '))

for i in range(initial, final + 1) :
    for m in range(61) :
        for s in range(61) :
            print(f'{i}:{m}:{s}')
