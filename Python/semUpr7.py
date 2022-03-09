def Is_Polindrome(num):
    temp = str(num)
    reverse = temp[::-1]
    if temp == reverse: return 1
    else: return 0

num = int(input("Please input number: "))
print(Is_Polindrome(num))
