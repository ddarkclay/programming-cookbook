def fibo(n):
    f1 = 0
    f2 = 1
    yield f1
    yield f2
    for i in range(1,n-1):
        f3 = f1+f2
        yield f3
        f1, f2 = f2, f3

val = fibo(10)
for i in val:
    print(i)