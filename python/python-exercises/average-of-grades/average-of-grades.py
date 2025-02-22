grades = list()

while True:
    grade = float(input('Enter the student\'s grade (Enter a negative number to leave): '))

    if grade < 0:
        break

    grades.append(grade)

average = sum(grades) / len(grades)

print('Average:', average)
