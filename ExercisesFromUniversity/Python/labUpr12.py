# задача 1 да се напише код, който дефинира клас person с полета име, фамилия, възраст, националност. Да се дефинира конструктор (___init___), който инициализира полетата. Да се добави метод принт, който отпечатва всичко 
#задача 2 да се добави към зад 1 клас student, наследник на класа person с две нови полета - университет и година на обучение. да се предифинира метод принт за него и да се принтира всичко
# задача 3 да се добави lecturer, който е наследник на person с две нови полета - университет и опит - брой години - да се направи принт, така че да отпечата всичко

class Person:
    def __init__(self, name, lname, age, nationality):
        self.name = name
        self.lname = lname
        self.age = age
        self.nationality = nationality
    def print(self):
        return f"Name: {self.name}\nLast Name: {self.lname}\nAge: {self.age}\nNationality: {self.nationality}"
class Student(Person):
    def __init__(self, name, lname, age, nationality, university, year_of_study):
        super().__init__(name, lname, age, nationality)
        self.university = university
        self.year_of_study = year_of_study
    def print(self):
        return "Student: \n" + super().print() + f"\nUniversity: {self.university}\nYear of study: {self.year_of_study}"
class Lecturer(Person):
    def __init__(self, name, lname, age, nationality, university, experience):
        super().__init__(name, lname, age, nationality)
        self.university = university
        self.experience = experience
    def print(self):
        return "Lecturer: \n" + super().print() + f"\nUniversity: {self.university}\nExperience: {self.experience}"



p1 = Person("Niki", "Georgiev", 22, "Bulgarian")
s1 = Student("Mitko", "Georgiev", 19, "Bulgarian", "Technical University", 3)
l1 = Lecturer("Georgi", "Marinov", 56, "Bulgarian", "Sofia University", 20)
print(p1.print())
print()
print(s1.print())
print()
print(l1.print())