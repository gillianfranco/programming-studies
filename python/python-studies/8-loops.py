# While

print('While: ')

cont = 0

while cont <= 10:
    print(cont)
    cont += 1

# For

print('\nFor:')

valor_inicial = 0
valor_final = 11
passo = 1

for i in range(valor_inicial, valor_final, passo):
    print(i)

print()

# Apenas com a quantidade de iterações

for i in range(valor_final):
    print(i)

print()

# Decremento

valor_inicial = 10
valor_final = -1
passo = -1

for i in range(valor_inicial, valor_final, passo):
    print(i)

print()

# Varredura de um array

def checagem_de_tipo(dado):
    match (dado):
        case int(dado):
            print('Inteiro:', dado)
        case float(dado):
            print('Real:', dado)
        case str(dado):
            print('String:', dado)
        case _:
            print('Tipo de dado desconhecido')

array = ['Python', 17, 3.1415, 42, 'C']

for dado in array:
    checagem_de_tipo(dado)

# É a mesma coisa que
#for i in range(0, len(array), 1):
#    checagem_de_tipo(array[i])

# Estruturas Aninhadas

print()

for x in range(1, 11, 1):
    for y in range(1, 11, 1):
        print(f'{x} x {y} = {x * y}')
    print()
