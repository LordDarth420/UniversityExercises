class IntList:
    def __init__(self, l):
        self.l = []
        for element in l:
            try:
                temp = int(element)
                self.l.append(temp)
            except ValueError:
                pass
    def showList(self):
        print(self.l)
    def average(self):
        return sum(self.l) / len(self.l)

n = int(input("Please enter n: "))
l1 = []
for i in range(n):
    temp = input(f"Please input element {i + 1}: ")
    l1.append(temp)
print(f"Original: {l1}")
intl1 = IntList(l1)
intl1.showList()
print(f"Average is: {intl1.average()}")



