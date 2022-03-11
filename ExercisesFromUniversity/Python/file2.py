beginning = int(input("Please enter first number: "))
end = int(input("Please enter second number: "))
isPrime = True

for i in range(beginning, end + 1):
    for j in range(2, i):
        if i % j == 0:
            isPrime = False
            break
    if isPrime:
        print(i)
    isPrime = True


