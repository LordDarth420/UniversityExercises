def Sum(num1, num2):
    return num1 + num2
def Subtract(num1, num2):
    return num1 - num2
def Multiply(num1, num2):
    return num1 * num2
def Divide(num1, num2):
    return num1 / num2
     

command = input("Please enter operator: ")
num1 = int(input("Please enter number 1: "))
num2 = int(input("Please enter number 2: "))
if command == '+':
    print(f"Result is: {Sum(num1, num2)}")
elif command == '-':
    print(f"Result is: {Subtract(num1, num2)}")
elif command == '*':
    print(f"Result is: {Multiply(num1, num2)}")
elif command == '/':
    print(f"Result is: {Divide(num1, num2)}")
else: print("No such operator!")



