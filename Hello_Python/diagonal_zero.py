from numpy import *

arr1 = array([
                [1,2,3,],
                [6,7,8,],
                [3,6,9,],
            ])

for i in range(3):
    for j in range(3):
        if (i == j) and (i==0 or j == 2) and (i == 2 or j == 0):
            arr1[i][j] = 0
print(arr1)


