def option_validation(question, minimum, maximum):
    while True:
        try:
            option = int(input(question))
            while (option < minimum) or (option > maximum):
                option = int(input('Invalid option. Try again: '))
            break
        except ValueError:
            print('Error! Enter only integer numbers.')
    return option

def complete_name_validation(question):
    while True:
        try:
            value = input(question)
            while not value.count(' '):
                value = input('Invalid name! Enter your complete name: ')
            break
        except:
            print('Error! Try again.')
    return value

registers = {
    'name': [],
    'year_of_birth': [],
    'sex': []
}
total_registers = 0
sum_ages = 0

while True:
    choose = option_validation('Enter 1 to start or 0 to close the program: ', 0, 1)

    if choose == 0:
        print()
        break

    name = complete_name_validation('Enter your complete name: ')
    year_of_birth = int(input('Enter your year of birth: '))
    sex = input('Enter M or F for your sex (Male or Female): ')

    registers['name'].append(name)
    registers['year_of_birth'].append(year_of_birth)
    registers['sex'].append(sex)

    total_registers += 1

    print()

for values in registers['year_of_birth']:
    year = values
    age = 2024 - year
    sum_ages += age

average_ages = sum_ages / total_registers

women_younger30 = []
men_older_average = []

for i in range(0, total_registers):
    age = 2024 - registers['year_of_birth'][i]
    sex = registers['sex'][i]

    if (age < 30) and (sex == 'F' or sex == 'f'):
        women_younger30.append(registers['name'][i])

    if (age >= average_ages) and (sex == 'M' or sex == 'm'):
        men_older_average.append(registers['name'][i])

print(f'Total of registers: {total_registers}')

print(f'\nAverage of ages: {average_ages}')

print('\nWomen younger than 30 years old: ')
if not women_younger30:
    print('None')
else:
    for woman_name in women_younger30:
        print(woman_name)

print('\nMen above the average age: ')
if not men_older_average:
    print('None')
else:
    for man_name in men_older_average:
        print(man_name)
