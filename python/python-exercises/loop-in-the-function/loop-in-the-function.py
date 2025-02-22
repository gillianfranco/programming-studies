def loop(final, initial = 0, step = 1) :
    for i in range(initial, final, step) :
        print(i, end=' ')
    print('\n')

loop(10)
loop(11, 1)
loop(11, 2, 2)
