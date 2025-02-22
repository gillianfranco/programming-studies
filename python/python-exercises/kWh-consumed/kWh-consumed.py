kWh = float(input('What was the amount of kilowatt-hours (kWh) consumed? '))

print('\nINSTALLATION:')
print('R - Residence')
print('B - Business')
print('I - Industry\n')

installation = input('Enter the letter corresponding to the installation: ')

price_per_kWh = 0

if installation == 'R' or installation == 'r':
    if kWh <= 500:
        price_per_kWh = 0.4
    elif kWh > 500:
        price_per_kWh = 0.65
    else:
        print('The amount of kilowatt-hours (kWh) is invalid.')
    print(f'You have to pay R${kWh * price_per_kWh:.2f}.')
elif installation == 'B' or installation == 'b':
    if kWh <= 1000:
        price_per_kWh = 0.55
    elif kWh > 1000:
        price_per_kWh = 0.6
    else:
        print('The amount of kilowatt-hours (kWh) is invalid.')
    print(f'You have to pay R${kWh * price_per_kWh:.2f}.')
elif installation == 'I' or installation == 'i':
    if kWh <= 5000:
        price_per_kWh = 0.55
    elif kWh > 5000:
        price_per_kWh = 0.6
    else:
        print('The amount of kilowatt-hours (kWh) is invalid.')
    print(f'You have to pay R${kWh * price_per_kWh:.2f}.')
else:
    print('The installation you entered is invalid.')
