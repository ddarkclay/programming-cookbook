# def cube(a):
#     return a * a * a

# num = [1,2,3,4,5]
# cube = list(map(cube,num))
# cube = list(map(lambda x: x * x * x,num))
# print(cube)

def square(a):
    return a*a
def cube(a):
    return a*a*a

func = [square,cube]
for i in range(5):
    val = list(map(lambda x : x(i),func))
    print(val)