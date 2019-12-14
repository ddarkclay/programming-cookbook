from numpy import *

arr1 = array([
                [1,2,3,4,5,3],
                [6,7,8,9,0,3]
            ])

arr2 = array(arr1.flatten())
arr3 = arr2.reshape(2,2,3)

#print(arr1)
#print(arr1.dtype)
#print(arr1.ndim)
#print(arr1.size)
#print(arr1.shape)
#print(arr2)
print(arr3)

