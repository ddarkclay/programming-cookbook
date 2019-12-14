class A:
    def __init__(self):
        print("In A Init")
        
    def feacher1(self):
        print("In Feacher-1-A")
    def feacher2(self):
        print("In Feacher-2-A")

class B:
    def __init__(self):
        print("In B Init")
        
    def feacher3(self):
        print("In Feacher-2-B")
    def feacher4(self):
        print("In Feacher-3-B")


class C(A,B):
    def __init__(self):
        super().__init__()
        print("In C Init")

    def feacher5(self):
        print("In Feacher-5-C")

    def feat(self):
        super().feacher2()

c1 = C()
c1.feacher1()
c1.feacher2()
c1.feacher3()
c1.feacher4()
c1.feacher5()
c1.feat()
