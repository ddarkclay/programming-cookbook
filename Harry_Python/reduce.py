import functools
lst = [1,2,3,4,5]
num = functools.reduce(lambda x,y:x+y,lst)
print(num)