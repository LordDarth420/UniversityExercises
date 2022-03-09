import random
random.seed() 

def multiply_then_sum(l1, l2):
    biggerLength = max(len(l1), len(l2))
    multi1 = 1
    multi2 = 1
    alreadyCycled = False
    for i in range(biggerLength): # 1 3 4 5  # 1 2
        if i < len(l1):
            multi1 *= l1[i]
        elif i > len(l1) - 1 and not alreadyCycled:
            for i in range(i - (len(l1) - 1):
                multi1 *= l1[i]
            alreadyCycled = True

        if i < len(l2):
            multi1 *= l2[i]
        elif i > len(l2) and not alreadyCycled:
            for i in range(i - len(l1)):
                multi1 *= l1[i]
            alreadyCycled = True
    
    return multi1 + multi2

def multiply_smaller_list(_list, j):
    for i in range




n1 = int(input("Please enter number 1: "))
n2 = int(input("Please enter number 2: "))
nums1 = [random.randint(0, 26) for i in range(n1)]
random.seed()
nums2 = [random.randint(0, 26) for i in range(n2)]
print(multiply_then_sum(nums1, nums2))
