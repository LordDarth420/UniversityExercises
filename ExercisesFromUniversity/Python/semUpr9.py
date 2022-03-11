import random
random.seed()

def zeroize(l1, num):
    for i in range(len(l1)):
        if l1[i] > num:
            l1[i] = 0
    return l1

n = int(input("Please enter n: "))
l1= [random.randint(0, 56) for i in range(n)]
num = int(input("Please enter number: "))
print(l1)
print(zeroize(l1, num))

