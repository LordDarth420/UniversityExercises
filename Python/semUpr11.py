import random
random.seed()


attempts = 0
successes = 0
num = int(input("Въведи число: "))
number_to_guess = random.randint(1, 11)
while num != 0:
    if num > 10:
        print("Числото трябва да е от 1 до 10, приятелю!")
    if num == number_to_guess and num <= 10:
        attempts += 1
        successes += 1
        print("Позна числото")
    elif num != number_to_guess and num <= 10:
        attempts += 1
        print("Съжалявам не позна")
    print()
    random.seed()
    number_to_guess = random.randint(1, 11)
    num = int(input("Въведи число: "))
print()
print(f"Общ брой опити: {attempts}\nБрой познати числа: {successes}")


