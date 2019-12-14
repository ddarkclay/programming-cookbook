def smart_div(func):
    def inner(a,b):
        if a>b:
            a,b = b,a
        return func(a,b)
    return inner

@smart_div
def div(a,b):
    print(str(a)+'_'+str(b))

# div = smart_div(div)
div(6,2)
