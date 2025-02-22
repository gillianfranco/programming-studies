def highest_value(text, *values) :
    highest = 0
    for i in values :
        if i > highest :
            highest = i
    print(text, highest)

highest_value('The highest value is ', 1, 2, 3, 5, 8, 10, 78, 95, 46, 104, 70)
