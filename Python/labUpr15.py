# 1. да се създаде програма за четене на двуичен файл document.bin, като се използва RB режим за четене на двоичен файл. да се използва метода за четене read и print за извеждане на първите четири букви от изречението "This is good"
# да се създаде програма, която преобразува Python обект в json данни, използвайте json.dumps()

# file = open("document.bin","wb")
# sentence = bytearray("This is good".encode("ascii"))
# file.write(sentence)
# file.close()
file = open("document.bin","rb")
print(file.read(4))
file.close()