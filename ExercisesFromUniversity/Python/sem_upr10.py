class Tiger:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def print_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")

tiger1 = Tiger("Steve", 12)
tiger2 = Tiger("Faustin", 17)
tiger1.print_info()
tiger2.print_info()