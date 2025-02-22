#from math import sqrt

def sqrt(n):
    i = n // 2
    result = 0
    while i > 0:
        if i * i == n:
            result = i
        i -= 1
    return result

print(sqrt(256))
