n = int(input("Please enter n: "))
nums = []
for i in range(n):
    num = int(input(f"Please enter number {i + 1}: "))
    nums.append(num)
max_and_index = []
max_and_index += [max(nums), nums.index(max(nums))]
print(max_and_index)