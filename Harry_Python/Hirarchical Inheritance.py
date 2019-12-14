class A:
    def met(self):
        print("This is Class A")

class B(A):
    def met(self):
        print("This is Class B")

class C(A):
    # def met(self):
    #     print("This is Class C")
    pass

b = B()
c = C()
b.met()
c.met()