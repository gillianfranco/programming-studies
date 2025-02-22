number_of_people = 0
total_money = 0
sum_of_ages = 0
i = 1

while True :
    age = int(input(f'Enter the age of the {i}º person. (Enter 0 to leave) '))

    if age == 0 :
        break
    elif age < 0 :
        print('Invalid age. Try again.')
        continue
    else :
        sum_of_ages += age

    if age < 3 :
        number_of_people += 1
    elif age > 12 :
        number_of_people += 1
        total_money += 30
    else :
        number_of_people += 1
        total_money += 15

    i += 1

print(f'Total number of people: {number_of_people}.')
print(f'Total amount of money: {total_money}.')
if number_of_people == 0 :
    print(f'Average of the ages: 0')
else :
    print(f'Average of the ages: {sum_of_ages / number_of_people:.2f}')

