import operations

num1 = int(input("Please enter number 1: "))
num2 = int(input("Please enter number 2: "))
operation = input("Please enter operation (+, -, * or /): ")
result = 0
if operation == '+':
    result = operations.Add(num1, num2)
elif operation == '-':
    result = operations.Subtract(num1, num2)
elif operation == '*':
    result = operations.Multiply(num1, num2)
elif operation == '/':
    result = operations.Divide(num1, num2)

print(f"Your result is: {result}")
