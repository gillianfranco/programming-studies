# Se ocorrer qualquer erro no valor de entrada, o loop irá continuar
while True:
    try:
        num = int(input('Digite um número: '))
        break
    except:
        print('Algum problema ocorreu, tente novamente.\n')

print()

# Se o valor de entrada for diferente de um inteiro, o loop irá continuar
while True:
    try:
        num = int(input('Digite um número: '))
        break
    except ValueError:
        print('Entrada inválida, tente novamente.\n')

print()

# Se não houver o índice digitado pelo usuário, o loop irá continuar
i = 0

while True:
    try:
        nome = input('Digite seu nome: ')
        index = int(input('Digite um índice de uma letra do seu nome: '))
        print(f'A letra neste índice é "{nome[index]}"')
        break
    except ValueError:
        print('Entrada inválida, tente novamente.\n')
    except IndexError:
        print('Seu nome não possui esse índice, tente novamente.\n')
    finally: # Será executado sempre
        print(f'\n<<Tentativa {i}>>\n')
        print('=' * 30)
        print()
        i += 1

# Se houver divisão por 0, o loop irá continuar
while True:
    try:
        num1 = int(input('Digite o dividendo: '))
        num2 = int(input('Digite o divisor: '))
        res = num1 / num2
    except ZeroDivisionError:
        print('Operação inválida, tente novamente.\n')
    except:
        print('Algo de errado aconteceu, tente novamente.\n')
    else: # Será executado se nenhum except for executado
        print(f'Resultado: {num1} / {num2} = {res:.2f}\n')
        break
