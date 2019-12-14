def factorial_recur(n):
    if n == 0:
        return 1
    return n*factorial_recur(n-1)

result = factorial_recur(5)
print(result)
