arr = []
n = int(input("Enter No. of Elements : "))
for i in range(1,n+1):
    num = int(input("Enter Elements of Lists : "))
    arr.append(num)

b = set()
unique = []

for x in arr:
    if x not in b:
        unique.append(x)
        b.add(x)
    
print("Original Array is : ",arr)
print("Removing Douplicates Elements (Union List) : ",unique)
