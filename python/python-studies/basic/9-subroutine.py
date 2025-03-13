# Declaracão e chamamento de um procedimento

def hello_world():
    print('Hello World!\n')

hello_world()

# Procedimento com parâmetros

def multiplicacao(num1, num2):
    print(num1 * num2)
    print()

multiplicacao(10, 7)

# Procedimento com parâmetros opcionais

def soma(x = 0, y = 0, z= 0, imprime=False):
    res = x + y + z
    if imprime:
        print(res)
        print()

soma(7, 10, imprime=True)

# Função

def raiz_quadrada(radicando):
    i = radicando // 2
    res = 0
    while i > 0:
        if i * i == radicando:
            res = i
        i -= 1

    return res

print(raiz_quadrada(16))
print()

# Função Lambda

elevado_ao_quadrado = lambda x: x**2

print(elevado_ao_quadrado(10))
print()
