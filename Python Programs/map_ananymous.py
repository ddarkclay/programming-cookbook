#def update(n):
#   return n * 2

#nums = [3,5,6,8,23,42,74,53,66,53]
#evens = list(filter(lambda n : n % 2 == 0,nums))
#doubles = list(map(update,evens))
#print(evens)
#print(doubles)




nums = [3,5,6,8,23,42,74,53,66,53]
evens = list(filter(lambda n : n % 2 == 0,nums))
doubles = list(map(lambda n : n * 2,evens))
print(evens)
print(doubles)
