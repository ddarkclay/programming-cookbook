from functools import reduce

#def add_all(a,b):
#   return a+b

#def update(n):
#   return n * 2

#nums = [3,5,6,8,23,42,74,53,66,53]
#evens = list(filter(lambda n : n % 2 == 0,nums))
#doubles = list(map(update,evens))
#sum = reduce(add_all,doubles)
#print(evens)
#print(doubles)
#print(sum)




nums = [3,5,6,8,23,42,74,53,66,53]
evens = list(filter(lambda n : n % 2 == 0,nums))
doubles = list(map(lambda n : n * 2,evens))
print(evens)
print(doubles)
sum = reduce(lambda a,b : a+b,doubles)
print(sum)
