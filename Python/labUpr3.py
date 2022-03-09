num = int(input("Please enter number: "))

l1 = [i for i in range(1, num + 1)]
d1 = {}
j = len(l1) - 1
for i in range(len(l1)):
    d1[l1[i]] = l1[j]
    j -= 1
print(d1)
