sentence = input('Enter any sentence: ')

sentence_size = len(sentence)
half_sentence = sentence[:int(sentence_size/2)]
last_two_characters = 'The last two characters of the half sentence is: {}'.format(half_sentence[-2:])

print(last_two_characters)