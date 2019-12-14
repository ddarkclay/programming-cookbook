#def is_even(n):
#   return n % 2 == 0

#nums = [3,5,6,8,23,42,74,53,66,53]
#evens = list(filter(is_even,nums))
#print(evens)




nums = [3,5,6,8,23,42,74,53,66,44]
evens = list(filter(lambda n : n % 2 == 0,nums))
print(evens)
