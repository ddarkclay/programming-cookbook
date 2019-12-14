# lst = [1,2,3,4,5,6,7,8]
# def is_greater(n):
#     return n>5
# gr_than_5 = list(filter(is_greater,lst))
# print(gr_than_5)

lst = ["abc","pkdj","kdsjfk","dk","ksjalk"]
def greater_length(str):
    return len(str) < 4
greater_len = list(filter(greater_length,lst))
print(greater_len)