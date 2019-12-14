import random
arr = []
n = int(input("Enter No. of Elements : "))
for i in range(n):
    arr.append(random.randint(1,20))
print("Randomized list is : ",arr)
