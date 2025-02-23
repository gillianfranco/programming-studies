# Verifica se o arquivo existe e retorna verdadeiro ou falso
def arquivo_existe(nome_arquivo):
    try:
        arquivo = open(nome_arquivo, 'rt') # abertura do arquivo de texto para leitura
        arquivo.close()
    except FileNotFoundError:
        return False
    else:
        return True

# Faz a criação do arquivo
def cria_arquivo(nome_arquivo):
    try:
        arquivo = open(nome_arquivo, 'wt+') # abertura do arquivo de texto para escrita e atualização
        arquivo.close()
    except:
        print('Erro! O arquivo não foi criado, tente novamente.\n')
    else:
        print(f'O arquivo <{nome_arquivo}> foi criado com sucesso!\n')

# Insere um texto no arquivo
def escrever_arquivo(nome_arquivo, texto):
    try:
        arquivo = open(nome_arquivo, 'at') # abertura do arquivo de texto para escrita que não sobrepõe
    except:
        print('Erro! O arquivo não foi alterado, tente novamente.\n')
    else:
        arquivo.write(texto + '\n')
    finally:
        arquivo.close()

# Faz a leitura do arquivo
def leitura_arquivo(nome_arquivo):
    try:
        arquivo = open(nome_arquivo, 'rt') # abertura do arquivo de texto para leitura
    except:
        print('Erro! Houve um problema na leitura do arquivo, tente novamente.\n')
    else:
        print(arquivo.read())

def continuar_escrevendo():
    escolha = input('Deseja continuar escrevendo? (S/N)')
    while escolha.lower() != 's' and escolha.lower() != 'n':
        escolha = input('Escolha inválida! Digite "S" para "Sim" ou "N" para "Não": ')

    print()

    return escolha.lower()


def divisao():
    print('=' * 70)
    print()

file = 'file_manipulation/teste.txt'

if arquivo_existe(file):
    print('O arquivo já existe!\n')
else:
    print('O arquivo ainda não existe.\n')
    cria_arquivo(file)

divisao()

while True:
    text = input('Digite o texto que será inserido no arquivo: ') + '\n'

    escrever_arquivo(file, text)

    if continuar_escrevendo() == 'n':
        divisao()
        break

leitura_arquivo(file)
