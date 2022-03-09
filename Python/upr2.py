text = str(input("Please enter your text: "))
letters_in_text = list(text)
resultDict = {}
for letter in letters_in_text:
    temp = list(letters_in_text)
    temp.remove(letter)
    newWord = "".join(temp)
    resultDict.update({letter: newWord})
print(resultDict)
