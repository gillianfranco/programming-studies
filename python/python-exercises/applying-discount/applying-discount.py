apply_discount = lambda price, discount: price - (price * (discount / 100))

price = float(input('Enter the price of the product: '))
discount = float(input('Enter a discount percentage: '))

print('\nPrice with discount: %.2f' % apply_discount(price, discount))
