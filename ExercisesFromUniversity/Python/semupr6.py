def Max(l1):
    Max = l1[0]
    for i in range(len(l1)):
        if Max < l1[i]:
            Max = l1[i]
    return Max
def Min(l1):
    Min = l1[0]
    for i in range(len(l1)):
        if Min > l1[i]:
            Min = l1[i]
    return Min
def Average(l1):
    return sum(l1) / len(l1)
import random
random.seed()

n = int(input("Please enter n: "))
l1 = [random.randint(0, 56) for i in range(n)]
print(l1)
print([Average(l1), Max(l1), Min(l1)])
