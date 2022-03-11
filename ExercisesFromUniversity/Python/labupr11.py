# съставете клас с името student с две свойства (studentId и studentName) добавете ново свойство studentClass. Създайте функцията за извеждането за цялото свойство и техните стойности в класа student

class Student:
    studentId = ""
    studentName = ""
    def __init__(self, studentId, studentName):
        self.studentId = studentId
        self.studentName = studentName
    def print(self):
        print(f"{self.studentId}\n{self.studentName}")

student1 = Student("12142151", "Nikolai Dimitrov")
student1.studentClass = "43"
student1.print()
print(student1.studentClass)

