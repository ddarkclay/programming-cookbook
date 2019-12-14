from numpy import *

arr1 = array([1,2,3,4,5])
#arr2 = arr1.view()
arr2 = arr1.copy()
arr1[2] = 13
print(arr1)
print(arr2)