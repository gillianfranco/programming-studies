def verify_value(question):
    while True:
        try:
            value = int(input(question))
            while value <= 0:
                value = int(input('Invalid value. Try again: $'))
            break
        except ValueError:
            print('Invalid value. Try again.')
            continue
    return value

def bills_to_pay(value):
    bills = {
        '$100': 0,
        '$50': 0,
        '$20': 0,
        '$10': 0,
        '$5': 0,
        '$1': 0
    }

    if value >= 100:
        bills['$100'] += value // 100
        value -= bills['$100'] * 100

    if value >= 50:
        bills['$50'] += value // 50
        value -= bills['$50'] * 50

    if value >= 20:
        bills['$20'] += value // 20
        value -= bills['$20'] * 20

    if value >= 10:
        bills['$10'] += value // 10
        value -= bills['$10'] * 10

    if value >= 5:
        bills['$5'] += value // 5
        value -= bills['$5'] * 5

    if value >= 1:
        bills['$1'] += value // 1
        value -= bills['$1'] * 1

    return bills

value = verify_value('Enter a value in dollars: $')

bills = bills_to_pay(value)
print('\nBill(s): ')
for key, value in bills.items():
    if value == 0:
        continue

    print(value, 'of', key)
