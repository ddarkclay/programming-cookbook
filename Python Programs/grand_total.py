from numpy import *

rowsum = 0
colsum = 0
total = 0
arr = array([
                [1,2,3],
                [4,5,6],
                [7,8,9]
            ])
print(arr,"\n\nFinal Output is : \n")

for i in range(3):
    for j in range(3):
        print(arr[i][j],end=" ")
        rowsum = rowsum + arr[i][j]
    print(rowsum)
    rowsum = 0

for i in range(3):
    for j in range(3):
        colsum = colsum + arr[j][i]
    print(colsum,end=" ")
    total = total + colsum
    colsum = 0
print(total)
