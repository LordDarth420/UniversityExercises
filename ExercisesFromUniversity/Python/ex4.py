num = int(input("Please enter a number: "))
temp = list(range(2, num + 1))

for i in reversed(range(len(temp))):
    if num % temp[i] != 0:
        del temp[i]
        

print(f"Your number {num} is divisible by:")
print(*temp)

