import random
random.seed()


count = int(input("Enter count: "))
nums = [random.randint(1, 21) for i in range(count)]
print(nums)
even_indexes = [nums[i] for i in range(count) if i % 2 == 0]
print(even_indexes)
even_indexes.sort()
print(even_indexes)
uneven_indexes = [nums[i] for i in range(count) if i % 2 != 0]
print(uneven_indexes)
uneven_indexes.sort(reverse=True)
print(uneven_indexes)
print(even_indexes + uneven_indexes)


