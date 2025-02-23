mochila = ['Machado', 'Camisa', 'Bacon', 'Abacate'] # Declaração e atribuição

print(mochila)
print()

print(mochila[-1]) # Último elemento da tupla
print(mochila[0:2]) # Dois primeiros
print(mochila[2:]) # Dois últimos
print()

# Varredura
for item in mochila:
    print(item)
print()

# Listamento
for i in range(len(mochila)):
    print(f'{i} --> {mochila[i]}')
print()

# Inserindo novos elementos
print(mochila)
mochila.append('Ovos') # Adiciona no final da lista
print(mochila)
mochila.insert(1, 'Canivete') # Adiciona na posição 1 e desloca o restante para a direita
print(mochila)
print()

# Deleção
print(mochila)
del mochila[1] # Deleta o elemento do índice 1 e desloca o restante para a esquerda
print(mochila)
mochila.remove('Ovos') # Deleta o elemento informado
print(mochila)
mochila.pop() # Deleta o último elemento da lista
print(mochila)
print()

# Número de ocorrências de um item da lista
print(f'Número de ocorrência de "Canivete": {mochila.count('Canivete')}\n')

# Índice da primeira ocorência de um item
print(f'Bacon está no índice: {mochila.index('Bacon')}\n')

# Inverte a ordem da lista
print(mochila)
mochila.reverse()
print(mochila)
print()

# Ordena a lista
mochila.sort()
print(mochila)
print()

# Copiar uma lista
mochila_referenciada = mochila # Não faz cópia, mas referencia a lista original
mochila_referenciada[1] = 'Blusa' # Altera também na lista original
print(mochila)

mochila_copia = mochila.copy() # Ou mochila[:]
mochila_copia.pop() # O que foi removido na cópia, não foi na original
print('Original:', mochila)
print('Cópia:', mochila_copia)
print()

# Limpar uma lista
print(mochila_referenciada)
mochila_referenciada.clear()
print(mochila_referenciada)
print()

# Varredura de tuplas/listas detro de listas
strings = ['Machado', 'Camisa', 'Bacon', 'Abacate'] # String é considerada uma tupla, porque cada letra é um elemento e eles não podem ser alterados

for palavra in strings:
    for letra in palavra:
        print(letra, end=' ')
    print()
print()

for i in range(len(strings)): # Outra alternativa
    for j in range(len(strings[i])):
        print(strings[i][j], end=' ')
    print()
