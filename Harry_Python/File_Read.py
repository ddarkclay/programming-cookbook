f = open("file.txt","rt")
# content = f.read(3)
# print(content)
# print(f.readline())
# print(f.readline())
# print(f.readline())
print(f.readlines())
print(type(f.readlines()))
f.close()