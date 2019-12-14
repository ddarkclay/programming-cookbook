arr = []
n = int(input("Enter No. of Elements : "))
for i in range(1,n+1):
    num = int(input("Enter Elements of Lists : "))
    arr.append(num)

even = []
odd = []
for j in arr:
    if(j%2==0):
        even.append(j)
    else:
        odd.append(j)
print("\nOriginal Array is ",arr)
print("Even Numbers are : {}".format(even))
print("Odd Numbers are : {}".format(odd))
