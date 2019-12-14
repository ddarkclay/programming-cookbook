from numpy import *

class Matrix:

    def __init__(self,arr1):
        for i in range(2):
            for j in range (2):
                self.arr1 = arr1

        print(self.arr1)

    def add(self,other):
        sum = []
        for i in range(2):
            for j in range(2):
                sum[i][j] = self.arr1[i][j] + other.arr1[i][j]

        for i in range(2):
            for j in range(2):
                print(sum[i][j])


    def show(self):
        pass

arr1 = array([
                [1,2,3],
                [4,5,6],
                [7,8,9]
            ])

arr2 = array([
                [1, 2, 3],
                [4, 5, 6],
                [7, 8, 9]
             ])
m1 = Matrix(arr1)
m2 = Matrix(arr2)

m1.add(m2)