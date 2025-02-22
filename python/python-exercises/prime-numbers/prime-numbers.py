for n in range(2, 100) :
    # Variable that changes its value if the number is not prime.
    flag = 0
    for i in range(2, n) :
        if n % i == 0 :
            flag = 1
            break

    if flag == 0 :
        print(n)
