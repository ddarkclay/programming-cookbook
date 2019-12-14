def count(lst):
    even = 0
    odd = 0
    for i in lst:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1
    return even,odd

lst = [20,34,41,43,89,46,45,86,99]
even,odd = count(lst)
print("Even : {} & odd : {}".format(even,odd))
