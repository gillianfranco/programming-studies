def highlight_text(text) :
    t = '-' * 19 + ' ' + text + ' ' + '-' * 19
    return t

def option_validation(question, minimum, maximum) :
    while True:
        try:
            option = int(input(question))
            while (option < minimum) or (option > maximum) :
                option = int(input('Invalid option. Try again: '))
            break
        except ValueError :
            print('Invalid value. Try again.')

    return option

def file_exists(file_name) :
    try :
        file = open(file_name, 'rt')
        file.close()
    except FileNotFoundError :
        return False
    else :
        return True

def create_file(file_name) :
    try :
        file = open(file_name, 'wt+')
        file.close()
    except :
        print("Error! The file wasn't created.\n")
    else :
        print(f'File {file_name} created successfully.\n')

def register_game(file_name, game_name, video_game_name) :
    try :
        file = open(file_name, 'at')
    except :
        print('Error opening the file.')
    else :
        file.write(f'Game: {game_name}; Video game: {video_game_name}.\n')
    finally:
        file.close()

def list_file(file_name) :
    try :
        file = open(file_name, 'rt')
    except :
        print('Error reading the file.')
    else :
        print(file.read())

# Main program

file_name = 'games.txt'

if file_exists(file_name) :
    print('The file was found.')
else :
    print("The file wasn't found.")
    create_file(file_name)

while True :
    print(highlight_text('Menu'))
    print('1-Add new item', end=' | ')
    print('2-List the items', end=' | ')
    print('3-Leave\n')

    choose = option_validation('Enter your choose here: ', 1, 3)

    if choose == 1 :
        print('\nAdd new item option has been selected.')
        game_name = input('Enter the game name: ')
        video_game_name = input('Enter the video game name: ')
        register_game(file_name, game_name, video_game_name)
        print()
    elif choose == 2 :
        print('\nList items option has been selected.')
        list_file(file_name)
        print()
    else :
        print('\nClosing the program...')
        break
