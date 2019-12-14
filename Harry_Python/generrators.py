# def topten():
#     n = 1
#     while n<=10:
#         sq = n*n
#         yield sq
#         n += 1
#
#
# values = topten()
# print(type(values))
# for i in values:
#     print(i)

def gen(n):
    for i in range(n):
        yield i

g = gen(20)
print(g.__next__())
print(g.__next__())
print(g.__next__())
for i in g:
    print(i)