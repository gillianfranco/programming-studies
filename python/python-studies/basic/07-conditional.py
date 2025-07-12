num1, num2 = 28, 17

# Condicional simples

if (num1 > num2):
    print(f'O número {num1} é maior que {num2}')

# Condicional composta

if num1 > num2: 
    print(f'O número {num1} é maior que {num2}')
else:
    print(f'O número {num2} é maior que {num1}')

# Condicionais aninhadas

nota = int(input('\nDigite uma nota de 0 a 10: '))

if nota < 6:
    if nota >= 4:
        print('Você está de recuperação!')
    else:
        print('Você está reprovado.')
else:
    print('Parabéns, você foi aprovado!')

# Condicionais de múltipla escolha

print('\nEscolha o que você deseja comprar: ')
print('1-Frutas')
print('2-Verduras')
print('3-Carnes')
escolha = int(input('>> '))

if escolha == 1:
    print('Escolha a fruta que você deseja: ')
    print('1-Maçã')
    print('2-Banana')
    print('3-Pera')
    fruta = int(input('>> '))

    match (fruta):
        case 1:
            print('Você comprou uma Maçã!')
        case 2:
            print('Você comprou uma Banana!')
        case 3:
            print('Você comprou uma Pera!')
        case _:
            print('Opção inválida, tente novamente!')

elif escolha == 2:
    print('Escolha a verdura que você deseja: ')
    print('1-Alface')
    print('2-Couve')
    print('3-Abóbora')
    verdura = int(input('>> '))

    match verdura:
        case 1:
            print('Você comprou uma Alface!')
        case 2:
            print('Você comprou uma Couve!')
        case 3:
            print('Você comprou uma Abóbora!')
        case _:
            print('Opção inválida, tente novamente!')

elif escolha == 3:
    print('Escolha a carne que você deseja: ')
    print('1-Carne de Vaca')
    print('2-Carne de Porco')
    print('3-Carne de Frango')
    carne = int(input('>> '))

    match carne:
        case 1:
            print('Você comprou uma Carne de Vaca!')
        case 2:
            print('Você comprou uma Carne de Porco!')
        case 3:
            print('Você comrpou uma Carne de Frango!')
        case _:
            print('Opção inválida, tente novamente!')

else:
    print('Opção inválida, tente novamente!')
print()

# Operador ternário
idade = 18
status = "Maior de idade" if idade >= 18 else "Menor de Idade"
print(status)
print()
