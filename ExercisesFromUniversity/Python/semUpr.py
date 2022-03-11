def turn_to_uneven(_list):
    newList = []
    for i in range(len(_list)):
        if _list[i] % 2 != 0:
            newList.append(_list[i])
    return newList

n = int(input("Please input n: "))
nums = []
for i in range(n):
    num = int(input(f"Please enter number {i + 1}: "))
    nums.append(num)

print(turn_to_uneven(nums))