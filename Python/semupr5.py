def printHelp():
    print("add [word] [wordinBulgarian] - add word and its meaning in Bulgarian to the dictionary\ndelete [word] - deletes word and its meaning from the dictionary altogether\nshow - shows all the words added in the dictionary\nq- ends program")

def add_word(word, bg_word, dictionary):
    dictionary[word] = bg_word
    print(f"Word {word} added!")
    return dictionary
def delete_word(word, dictionary):
    if word in dictionary:
        del dictionary[word]
        print(f"Word {word} deleted!")
    else: print(f"Word {word} doesn't exist!")
    return dictionary
def show_dict(dictionary):
    print(f"Your dictionary: \n{dictionary}")


d1 = {}
printHelp()
print("What do you want to do?")
command = input().split(' ')
while command[0] != 'q':
    if command[0] == 'add':
        word = command[1]
        bg_word = command[2]
        d1 = add_word(word, bg_word, d1)
    elif command[0] == 'delete':
        word = command[1]
        d1 = delete_word(word, d1)
    elif command[0] == 'show':
        show_dict(d1)
    else: print("No such command!")
    command = input().split(' ')
    




