def fibo(n):
    f1 = 0
    f2 = 1
    for i in range(0,n):
        f3 = f1 + f2
        f1 = f2
        f2 = f3

    print("Fibonacci Number of ",n," Term is ",f3)

fibo(5)