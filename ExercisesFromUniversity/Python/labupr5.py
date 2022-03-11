def Average(l1):
    Sum = 0
    for i in range(len(l1)):
        Sum += l1[i]
    return Sum / len(l1)

def Min(l1):
    Min = l1[0]
    for i in range(len(l1)):
        if Min > l1[i]:
            Min = l1[i]
    return Min

def Max(l1):
    Max = l1[0]
    for i in range(len(l1)):
        if Max < l1[i]:
            Max = l1[i]
    return Max


n = int(input("Please input n: "))
l1 = [int(input(f"Please enter number {i + 1}: ")) for i in range(n)]
print([Average(l1), Max(l1), Min(l1)])