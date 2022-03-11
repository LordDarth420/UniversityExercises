n = int(input("Please enter n: "))
Sum = 0
for i in range(n):
    num = int(input(f"Please enter number {i + 1}: "))
    Sum += num

print(f"Sum of all your numbers is: {Sum}")
