from array import *
arr = array('i',[])
n = int(input("Enter How Many Numbers Do you Have : "))

for i in range(0,n):
    x = int(input("Enter a Number : "))
    arr.append(x)

find = int(input("Enter a Number Which you want to find : "))
k = 0
print()

for i in arr:
    if i == find:
        print(find," is in ",k," Position")
    k += 1;
print("End")

#print(arr.index(find));
