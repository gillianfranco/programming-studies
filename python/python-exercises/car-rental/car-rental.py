def verify_kilometers(question):
    while True:
        try:
            km = float(input(question))

            while km <= 0:
                km = float(input('Invalid value. Try again: '))

            break

        except ValueError:
            print('Invalid value. Try again.\n')
            continue

    return km

def verify_days(question):
    while True:
        try:
            days = float(input(question))

            while days < 0:
                days = float(input('Invalid value. Try again: '))

            break

        except ValueError:
            print('Invalid value. Try again.\n')
            continue

    return days

calculate_price = lambda km, days: (km * 0.15) + (days * 60)

km_driven = verify_kilometers('Enter the number of kilometers driven: ')
days_rented = verify_days('Enter the number of days rented: ')

print('\nPrice to pay:', calculate_price(km_driven, days_rented))
