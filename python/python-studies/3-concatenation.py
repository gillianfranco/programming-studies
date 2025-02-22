# Soma de strings

s1 = 'Lógica de Programação e '
s1 = s1 + 'Algoritmos'

print(s1)

# Multiplicação de um caractere

s2 = 'Alfabeto: ' + 'A' + '*' * 24 + 'Z' 

print(s2)

# Composição com marcadores de posição

inteiro = 1
real = 1.7
string = 'string'

print('\nInteiro (%%d): %d' % inteiro)
print('Inteiro (%%i): %i' % inteiro)

print('\nReal (%%f): %f' % real) # Por padrão, com 6 dígitos depois da vírgula
print('Real (%%.2f): %.2f' % real) # Com apenas dois dígitos depois da vírgula

print('\nString (%%s): %s' % string)

# Composição moderna

nota, disciplina = 9.1693, 'Cálculo 1'
s3 = '\nVocê tirou {:.2f} na disciplina de {}'.format(nota, disciplina)
print(s3)

# Composição com f-string
s4 = f'\nVocê tirou {nota:.2f} na disciplina de {disciplina}'
print(s4)
