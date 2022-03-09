num = int(input("Please enter number: "))
t1 = ()
for i in range(1, num + 1):
    t1 += [i],
print(tuple(sorted(t1)))
print(tuple(sorted(t1, reverse=True)))


