  #person - name, surname, nationality, age конструктор, метод принт (name and nationality)

class Person:
    def __init__(self, name, surname, age, nationality):
        self.name = name
        self.surname = surname
        self.age = age
        self.nationality = nationality
    def Print(self):
        print(f"Name: {self.name}\nSurname: {self.surname}\nAge: {self.age}\nNationality: {self.nationality}")

p1 = Person("Kaloqn", "Iliev", 18, "Bulgarian")
p2 = Person("Georgi", "Damqnov", 23, "Bulgarian")
p1.Print()
p2.Print()
