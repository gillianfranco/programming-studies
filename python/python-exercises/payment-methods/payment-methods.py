total_value = float(input('Enter the total value: '))

print('\nPayment methods:\n1 - Cash payment – grant a 5% discount.\n2 - Payment in 3 installments – the amount does not change.\n3 - Payment in 5 installments – an additional charge of 2%.\n4 - Payment in 10 installments – an additional charge of 8%.')

choose = int(input('Enter your choose: '))

if choose == 1:
    print('Choose: Cash payment – grant a 5% discount.')
    final_value = total_value - (total_value * 0.05)
    print(f'You had to pay R${total_value}, but now you will have to pay 1x of R${final_value}.')
elif choose == 2:
    print('Choose: Payment in 3 installments – the amount does not change.')
    print(f'You have to pay 3x R${total_value / 3}. The total value is R${total_value}.')
elif choose == 3:
    print('Choose: Payment in 5 installments – an additional charge of 2%.')
    final_value = total_value + (total_value * 0.02)
    print(f'You had to pay R${total_value}, but now you will have to pay 5x of R${final_value / 5}. The total value is R${final_value}.')
elif choose == 4:
    print('Choose: Payment in 10 installments – an additional charge of 8%.')
    final_value = total_value + (total_value * 0.08)
    print(f'You had to pay R${total_value}, but now you will have to pay 10x of R${final_value / 10}. The total value is R${final_value}.')
else:
    print('The method you choose is invalid.')
