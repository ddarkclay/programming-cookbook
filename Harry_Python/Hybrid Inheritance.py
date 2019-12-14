class A:
    def met(self):
        print("This is Class A")

class B(A):
    # def met(self):
    #     print("This is Class B")
    pass

class C(A):
    # def met(self):
    #     print("This is Class C")
    pass

class D(B,C):
    # def met(self):
    #     print("This is Class D")
    pass

d = D()
d.met()