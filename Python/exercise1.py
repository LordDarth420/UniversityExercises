from datetime import datetime

def printMessage(name, age):
    currentYear = datetime.now().year
    birth_year = currentYear - age
    print(f"Hello, {name}! You're going to be 100 in {birth_year + 100}!")
name = input("What's your name, bro? ")
age = int(input("What age are you going to be this year, bro? Please type in a number, not something else. "))
printMessage(name,age)


