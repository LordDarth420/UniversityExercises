def check_if_prime(num):
    prime = True
    for i in range(2, num):
        if num % i == 0:
            prime = False
            break
    if prime: return 1
    else: return 0

def print_all_primes(num):
    prime = True
    l1 = []
    for i in range(2, num + 1):
        prime = True
        for j in range(2, i):
            if i % j == 0:
                prime = False
                break
        if prime:
            l1.append(i)
    print(l1)

num = int(input("Please enter number: "))
if check_if_prime(num) is 1: print(f"Your number {num} is prime.")
else: print(f"Your number {num} is not prime.")
print_all_primes(num)
