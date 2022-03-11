word = str(input("Please enter word: "))
d1 = {}

for letter in word:
    if letter not in d1:
        d1[letter] = 1
    else:
        d1[letter] += 1

print(d1)
