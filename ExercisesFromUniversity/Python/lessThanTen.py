# l1 = []
# less_than_five = []
# command = input("Enter number: ")
# while command != "end":
#     try:
#         num = int(command)
#         l1.append(num)
#         command = input("Enter number: ")
#     except Exception:
#         print("This is not a number!")
#         command = input("Enter number: ")
        

# for num in l1:
#     if num < 5:
#         less_than_five.append(num)

# print(less_than_five)

l1 = [5,4,5,5,6024,642624]
print([num for num in l1 if num < 5])


