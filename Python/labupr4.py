#съставете програма, намираша лицето на геомтр фигура, като първо се въвежда вида на фигурата 1 - квадрат 2 - прввоъгълник 3 -правоъгълен триъгълник ЗА пресмятане на лицето на отделните фигури да се напишат подходящи функции.
def square_area():
    a = int(input("a: "))
    print(f"The area of your square is: {a ** 2}")

def rectangle_area():
    a = int(input("a: "))
    b = int(input("b: "))
    print(f"The area of your rectangle is: {a * b}")

def rightTr_area():
    a = int(input("a: "))
    b = int(input("b: "))
    print(f"The area of your right triangle is: {(a * b) / 2}")

def print_intro():
    print("Choices:\n1 - square\n2 - rectangle\n3 - right triangle")
    print()


print_intro()
command = int(input("Please input your shape of choice by number: "))
while command not in [1,2,3]:
        print("There is no such number! Follow the instructions please!")
        print_intro()
        command = int(input("Please input your shape of choice by number: "))
if command == 1: square_area()
elif command == 2: rectangle_area()
else: rightTr_area()

   



    

