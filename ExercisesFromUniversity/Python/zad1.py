
str1 = input("Please input list 1: ")
str2 = input("Please input list 2: ")
map_object1 = map(int, str1.split(' '))
map_object2 = map(int, str2.split(' '))
nums1 = list(map_object1)
nums2 = list(map_object2)

multiplied1 = 1
multiplied2 = 1

if len(nums1) > len(nums2):
    for num in nums1:
        multiplied1 *= num
    for num in nums2:
        multiplied2 *= num
    temp = len(nums1) - len(nums2)
    for i in range(temp):
        multiplied2 *= nums2[i]
elif len(nums1) == len(nums2):
    for num in nums1:
        multiplied1 *= num
    for num in nums2:
        multiplied2 *= num
else:
    for num in nums1:
        multiplied1 *= num
    for num in nums2:
        multiplied2 *= num
    temp = len(nums2) - len(nums1)
    for i in range(temp):
        multiplied2 *= nums2[i]
# 1 2 3 = 6
# 1 2 3 4 = 24 30
print(f"Your sum is: {multiplied1} + {multiplied2} = {multiplied1+multiplied2}")


