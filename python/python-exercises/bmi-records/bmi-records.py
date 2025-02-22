people = []
bmi = lambda w, h: w / (h**2)
running = 1

def max_bmi(p):
    max_found = 0
    for i in p:
        if i[3] > max_found:
            max_found = i[3]
    return max_found

def min_bmi(p):
    min_found = 99
    for i in p:
        if i[3] < min_found:
            min_found = i[3]
    return min_found

while running:
    name = input("What's your name? ")
    height = float(input("What's your height? "))
    weight = float(input("What's your weight? "))
    people.append([name, height, weight, bmi(weight, height)])
    running = int(input('Enter 1 to continue or 0 to close the program: '))

print(f'\nRegisters: {people}')
print(f'Total of registers: {len(people)}')
print(f'The person with the highest BMI: {max_bmi(people)}')
print(f'The person with the smallest BMI: {min_bmi(people)}')
