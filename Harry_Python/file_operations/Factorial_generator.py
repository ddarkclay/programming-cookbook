def fact(n):
    for i in range(1,n+1):
        yield i


val = fact(5)
f = 1
for i in val:
    f = f * i
print(f)
