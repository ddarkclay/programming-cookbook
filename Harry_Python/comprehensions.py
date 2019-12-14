ls = []
#Without List Comprehension
# for i in range(100):
#     if i % 3 == 0:
#         print(i)

# With List Comprehension
ls = [i for i in range(1,100) if i%3==0]
print("List Comprehension")
print(ls)

# With Dictonary Comprehension
dict = {i:f"item {i}" for i in  range(1,100) if i % 10 == 0}
print("\nDictonary Comprehension")
print(dict)

# changing order like default is key : value then convert in value : key
dict2 = {value : key for key, value in dict.items()}
print("\nReversing Value Key")
print(dict2)

# Sets Comprehension
dress = {dress for dress in ["dress1","dress2","dress3"]}
print("\nSet Comprehension")
print(dress)

# Generator Comprehension
even = (i for i in range(1,101) if i%10==0)
# print(even.__next__())
# print(even.__next__())
# print(even.__next__())
print("\nGenerator Comprehension")
for item in even:
    print(item,end=" ")