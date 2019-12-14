from array import *

class Matrix:

    def __init__(self,arr):
        for i in arr:
            self.arr = arr
            print("Array is ",arr[i],end=" ")

    def add(self,other):
        sum = []
        for i in range(4):
            sum[i] = self.arr[i-1] + other.arr[i-1]
            print("\nSum is : ",sum[i])


    def show(self):
        pass

print("Enter First Array : ")
arr1 = array('i',[])
for i in range(4):
    num = int(input("Enter Number : "))
    arr1.append(num)

print("Enter Second Array : ")
arr2 = array('i',[])
for i in range(4):
    num = int(input("Enter Number : "))
    arr1.append(num)

m1 = Matrix(arr1)
m2 = Matrix(arr2)

m1.add(m2)