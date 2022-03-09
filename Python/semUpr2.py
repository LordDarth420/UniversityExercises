def check_if_anagrams(str1, str2):
    reversed_str2 = str2[::-1]
    if(str1 == reversed_str2):
        return 1
    else:
        return 0



word1 = input("Please enter word 1: ")
word2 = input("Please enter word 2: ")
if(check_if_anagrams(word1, word2) == 1):
    print("The strings are anagrams.")
else:
    print("The strings aren't anagrams.")