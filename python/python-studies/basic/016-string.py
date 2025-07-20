# Transformação de uma string em uma lista
s1 = list('Algoritmos')
print(s1)
print(''.join(s1)) # Juntando todos os elementos da lista
print()

# Validações
s2 = 'Lógica de Programação e Algoritmos'
print(s2.startswith('Lógica')) # Verifica se começa com "Lógica"
print(s2.endswith('Algoritmos')) # Verifica se termina com "Algoritmos"
print('gillianfranco17'.isalnum()) # Verifica se contém apenas números e letras (sem espaço). Aceita caracteres com acentuação
print('gillianfranco'.isalpha()) # Verifica se contém apenas caracteres regulares
print('17'.isdigit()) # Verifica se contém somente números
print('1017'.isnumeric()) # Verifica se contém apenas números
print('GILLIAN'.isupper()) # Verifica se contém apenas caracteres maiúsculos. Aceita espaços
print('gillian'.islower()) # Verifica se contém apenas caracteres minúsculos. Aceita espaços
print(' '.isspace()) # Verifica se contém espaço (TAB, quebra de linha, retorno, etc)
print(';fah3#$!#:}+»¶¬«¶øóéú9éä®»ðájf'.isprintable()) # Verifica se é possível imprimir na tela
print()

# Case-sensitive
print(s2.upper())
print(s2.lower())
print()

# Divisão de uma string
s3 = 'Um mafagafinho, dois mafagafinhos, três mafagafinhos...'
print(s3.split())
print()

# Substituição de strings
print(s3.replace('mafagafinho', 'gatinho', 1).replace('mafagafinhos', 'gatinhos'))
print()

# Remove espaços das extremidades
s4 = ' Hello! '
print(s4)
print(s4.strip()) # Da esquerda e direita
print(s4.lstrip()) # Da esquerda
print(s4.rstrip()) # Da direita

# Busca por sequências de caracteres
print(s3.find('mafagafinho')) # Retorna o índice da substring ou -1 (se não encontrar)
print(s3.rfind('mafagafinho')) # Inicia a busca da direita para a esquerda
