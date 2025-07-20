mochila = ('Machado', 'Camisa', 'Bacon', 'Abacate') # Declaração e atribuição

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

# Soma de tuplas
upgrade = ('Queijo', 'Canivete')
nova_mochila = mochila + upgrade

print(nova_mochila)
print()
