A = float(input('Enter the length of the first side of the triangle: '))
B = float(input('Enter the length of the second side of the triangle: '))
C = float(input('Enter the length of the third side of the triangle: '))

if (A > 0 and B > 0 and C > 0) and (A + B > C and B + C > A and A + C > B):
    #The triangle is valid.
    if A != B and A != C and B != C:
        print('\nThe triangle is Scalene.')
    else:
        if A == B and B == C:
            print('\nThe triangle is Equilateral.')
        else:
            print('\nThe triangle is Isosceles.')
else:
    print('The triangle is invalid.')
