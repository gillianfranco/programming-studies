def soma(*num): # `*` Faz o desempacotamento de valores do parâmetro
    acumulador = 0

    print(f'Tupla: {num}')

    for i in num:
        acumulador += i
    
    return acumulador

print(f'Resultado: {soma(10, 2, 3, 2)}')
