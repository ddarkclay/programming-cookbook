class Addition:
    def sum(self,a=None,b=None,c=None):
        s = 0
        if a!=None and b!=None and c!=None:
            s = a+b+c
        elif a!=None and b!=None:
            s = a+b
        else:
            s = a
        print(s)

o = Addition()
o.sum(2,5,2)
o.sum(4,6)
o.sum(5)
