def string_validation(question, minimum, maximum) :
    text = input(question)

    while len(text) < minimum or len(text) > maximum :
        text = input(f'Invalid text. Enter a text that has at least {minimum} characters and a maximum of {maximum} characters: ')

    return text

x = string_validation('Enter a text: ', 1, 17)

print(f'Your text is valid. You entered the following text: "{x}".')
