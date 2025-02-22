def verify_salary(question):
    while True:
        try:
            value = float(input(question))

            while value < 0:
                value = float(input('Invalid value. Try again: $'))

            break

        except ValueError:
            print('Invalid value. Try again.\n')
            continue

    return value

def verify_year_of_entry(question):
    while True:
        try:
            year = int(input(question))

            while (year < 1990) or (year > actual_year):
                year = int(input('Invalid year. Try again: '))

            break

        except ValueError:
            print('Invalid year. Try again.\n')
            continue

    return year

def calculate_bonus(salary, year_of_entry):
    time = actual_year - year_of_entry

    if time > 10:
        return salary * (30 / 100)
    elif (time > 5) and (time < 10):
        return salary * (20 / 100)
    else:
        return salary * (10 / 100)

global actual_year
actual_year = 2024

salary = verify_salary('Enter the employee\'s salary: $')
year_of_entry = verify_year_of_entry('Enter the year did the employee join the company: ')

bonus = calculate_bonus(salary, year_of_entry)

print('\nYour bonus is $%.2f\nTotal: $%.2f' % (bonus, salary + bonus))
