num = int(input("Please input number: "))
check = int(input("Please input number that I should check with: "))

if num % check == 0:
    print(f"Your number {num} is divisble by {check}.")
else:
    print(f"Your number {num} is not divisible by {check}.")
