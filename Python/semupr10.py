nums = []
command = input("Please enter number or 'q' to stop: ")
while command != 'q':
    num = int(command)
    nums.append(num)
    command = input("Please enter number or 'q' to stop: ")

nums_divisable_by_seven = []
nums_not_divisable_sum = 0
average_nums_divisable_by_seven = 0
for num in nums:
    if num % 7 == 0:
        nums_divisable_by_seven.append(num)
    else:
        nums_not_divisable_sum += num
divisable_by_seven_percent = round((len(nums_divisable_by_seven) / len(nums)), 2)
average_nums_divisable_by_seven = sum(nums_divisable_by_seven) / len(nums_divisable_by_seven)
Max = nums[0]
for num in nums:
    if num > Max:
        Max = num

print(f"Percent of numbers that divide by 7: {divisable_by_seven_percent}\nSum of all numbers not dividable by 7: {nums_not_divisable_sum}\nBiggest number: {Max}\nAverage of all numbers dividable by 7: {average_nums_divisable_by_seven}")

