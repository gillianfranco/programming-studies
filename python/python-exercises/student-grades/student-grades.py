student = {}

student['name'] = input("Enter the student's name: ")

grade1 = float(input('Enter the first grade: '))
grade2 = float(input('Enter the second grade: '))
grade3 = float(input('Enter the third grade: '))

student['average'] = (grade1 + grade2 + grade3) / 3

if student['average'] >= 7:
    student['situation'] = 'Approved'
elif (student['average'] < 7) and (student['average'] >= 5):
    student['situation'] = 'In Recovery'
else:
    student['situation'] = 'Reproved'

print(f'The student {student['name']} has an average of {student['average']:.2f} and is {student['situation']}.\n')

for key, value in student.items():
    print(f'{key} = {value}')
