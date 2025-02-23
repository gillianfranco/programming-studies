game = { # Declaração e atribuição
    'nome': 'Super Mario', 
    'desenvolvedora':'Nintendo', 
    'ano':1990
}

print(game)
print()

print(game.values()) # Imprime apenas os valores
print(game.keys()) # Imprime apenas as chaves
print(game.items()) # Imprime chaves e valores
print()

# Varredura
for key, value in game.items():
    print(f'{key} --> {value}')
print()

# Varredura de lista com dicionários
pessoas = []
pessoa = {}

for i in range(3):
    pessoa['nome'] = input('Digite o nome: ')
    pessoa['idade'] = input('Digite a idade: ')
    pessoas.append(pessoa.copy())
    print()

print('\nPessoas cadastradas:')

for pessoa in pessoas:
    for key, value in pessoa.items():
        print(f'{key} --> {value}')
    print()

    
# Varredura de dicionário com listas
pessoas = {'nome': [], 'idade': []}

for i in range(3):
    nome = input('Digite o nome: ')
    pessoas['nome'].append(nome)

    idade = int(input('Digite a idade: '))
    pessoas['idade'].append(idade)

    print()

print('\nPessoas cadastradas:')

for i in range(len(pessoas['nome'])):
    print(f'Nome --> {pessoas['nome'][i]}')
    print(f'Idade --> {pessoas['idade'][i]}')
    print()
