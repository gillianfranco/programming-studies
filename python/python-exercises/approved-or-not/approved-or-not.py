def verify_grades(question):
    while True:
        try:
            grade = float(input(question))
            if grade < 0 or grade > 10:
                print('Invalid grade. Enter a grade between 1 and 10, please.\n')
                continue
            break
        except ValueError:
            print('Invalid grade. Try again.\n')
            continue
    return grade

grades = []

for i in range(3):
    grades.append(verify_grades(f'Enter the grade {i + 1}: '))

average = sum(grades) / 3

print('\nThe average is {:.2f}'.format(average))

if average >= 7:
    print('The student is approved!')
else:
    print('The student is not approved.')
