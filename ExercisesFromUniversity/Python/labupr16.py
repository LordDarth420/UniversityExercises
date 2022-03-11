
# да се създаде програма, която преобразува Python обект в json данни, използвайте json.dumps()
import json

l1 = [56, 67, "Nikolai", 221, "Dimitrov"]

with open("test.json", "w") as outFile:
    json.dump(l1, outFile)