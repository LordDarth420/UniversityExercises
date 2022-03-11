class Student:
    def __init__(self, name, lname,facultynum, grade):
        self.name = name
        self.lname = lname
        self.facultynum = facultynum
        self.grade = grade
    def __str__(self):
        return f"{self.name} {self.lname} {self.facultynum} - {self.grade}"
class Group:
    studentList = []
    excellentStudents = []
    def __init__(self):
        pass
    def add(self, student):
        if student not in self.studentList:
            self.studentList.append(student)
    def remove(self):
        for student in self.studentList:
            if student.grade < 3:
                self.studentList.remove(student)
    def show(self):
        if len(self.studentList) != 0:
            for student in self.studentList:
                print(student)
        else:
            print("No students here!")
    def average_grade(self):
        Sum = 0
        for student in self.studentList:
            Sum += student.grade
        return f"Average grade is: {Sum / len(self.studentList)}"
    def min(self):
        student1 = self.studentList[0]
        Min = self.studentList[0].grade
        for student in self.studentList:
            if Min > student.grade:
                Min = student.grade
                student1 = student
        return student1
    def max(self):
        student1 = self.studentList[0]
        Max = self.studentList[0].grade
        for student in self.studentList:
            if Max < student.grade:
                Max = student.grade
                student1 = student
        return student1
    def move(self):
        for student in self.studentList:
            if student.grade >= 5.50:
                self.excellentStudents.append(student)
                self.studentList.remove(student)
    def showExcellentStudents(self):
        for student in self.excellentStudents:
            print(student)
    def delete(self):
        self.studentList.clear()
    def return_students_with_letter_A(self):
        students_with_letter_A = []
        for student in self.studentList:
            if student.name[0] == 'A':
                students_with_letter_A.append(student)
        return students_with_letter_A
    def print_students_with_small_letters(self):
        for student in self.studentList:
            print(f"{student.name.lower()} {student.lname.lower()}")
    def print_students_with_upper_letters(self):
        for student in self.studentList:
            print(f"{student.name.upper()} {student.lname.upper()}")
    def sort(self):
        sorted_students = sorted(self.studentList, key=lambda s:s.grade, reverse=True)
        return sorted_students

s1 = Student("Nikolai", "Dimitrov", "1631153135", 5.44)
s2 = Student("Aleks", "Haskov", "113531531", 3.21)
s3 = Student("Valeri", "Valerov", "15311351", 2.13)
s4 = Student("Asen", "Tasenov", "53516361", 5.80)
group1 = Group()
group1.add(s1)
group1.add(s2)
group1.add(s3)
group1.add(s4)
group1.show()
print()
group1.add(s3)
group1.show()
print()
group1.remove()
group1.show()
print()
print(group1.average_grade())
print(f"Student with lowest grade: {group1.min()}")
print(f"Student with highest grade: {group1.max()}")
students_with_letter_A = group1.return_students_with_letter_A()
print("Students names beginning with A:")
for student in students_with_letter_A:
    print(student)
print()

group1.print_students_with_small_letters()
print("Sorted students by grade:")
sorted_students = group1.sort()
for student in sorted_students:
    print(student)

group1.move()
print()
group1.show()
print()
print(f"Students with excellent marks: ")
group1.showExcellentStudents()
group1.delete()
group1.show()


# да се състави метод, който връща данните за студентите, чието първо име започва с буквата 'А' 
# да се състави метод, представящ имената на студентите само с малко букви
# да се състави метод write_to_file, записващ списъка със студентите в .json файл, като входът да е от различен файл
# да се състави метод sort за подреждане на групата по успех в намаляващ ред

# да се състави функция приход за списък от стоки с код, цена и количество. да се извърши търсене по код и ако кодът го има, да се създаде намаление на продукта с 10%. ако кодът го няма - да се генерира код от 4 думи и да се изпише "" да се изчисли средно аритметичната и максимална продажна цена на стоките в списъка. да се изчисли крайната цена на стоките от списъка с включено ДДС.