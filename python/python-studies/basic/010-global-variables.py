def omelete():
    global ovos # Declaração da variável global
    ovos = 6 # Atribuição

ovos = 12
print(ovos) # Será impresso 12

omelete()
print(ovos) # Será impresso 6, porque a função que declara a variável global foi chamada
