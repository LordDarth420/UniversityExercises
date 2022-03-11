def second_max(_list):
    _list.sort(reverse=True)
    return _list[1]

n = int(input("Please enter n: "))
nums = [input(f"Please enter number {i + 1}: ") for i in range(n)]
print(second_max(nums))

