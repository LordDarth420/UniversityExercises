# d = dict()
# d1 = dict(name='ivan', last_name='petrov')
# d3 = dict({ ('name', 'polina'), ('l_name', 'koleva')})
# print(d)
# print(d3)


# d = { }
# d['name'] = 'petyr'
# d['l_name'] = 'kolev'
# print(d)

# d4 = {'name': 'ivan', 'last_name': 'ivanov'}
# print(d4)

d = {'name': 'ivan', 'last name': 'ivanov'}
d['name']
# print(d['fname'])

b = 'fname' in d
print(b)

len(d)
print(len(d))

d['s_name'] = 'petrov'
print(d)

del d['s_name']
print(d)

keys = list(d.keys())
keys.sort
for key in keys:
    print(f"{key} => {d[key]}", end = ' ')

print()

s2 = set("hello")

s2 = set("hello")
for i in s2:
    print(i, end=' ')

print(len(s2))

s = set([1,2,3,])
s1 = set ([4,2,6])
s3 = s | s1
print(s3)

s = set([1,2,3,4])
s1 = set([2,4,6])
s2 = s - s1
print(s2)
s3 = s1 - s
print(s3)

s = set([1,2,3,4])
s1 = set([2,4,6])
s4 = s & s1
print(s4)

s = set([1,2,3,4])
s1 = set([2,4,6])
s5 = s ^ s1
print(s3)


s1 = set([2,4,6])
s1.add(s)
s1.remove(2)
print(s1)
s1.remove(2)

