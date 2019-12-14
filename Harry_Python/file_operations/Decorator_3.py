

def squarecube(func):
    def cube(n):
        return n*n,n*n*n
    return cube
@squarecube
def square(n):
    return n*n

# square = squarecube(square)
print(square(5))