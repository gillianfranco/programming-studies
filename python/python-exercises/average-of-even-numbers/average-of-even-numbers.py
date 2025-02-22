sum_of_evens = 0
quantity = 0

for i in range(1, 101):
    if i % 2 == 0:
        sum_of_evens += i
        quantity += 1

average = sum_of_evens / quantity

print('Average:', average)