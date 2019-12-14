class A:
    def feacher1(self):
        print("In Feacher-1")
    def feacher2(self):
        print("In Feacher-2")

class B(A):
        def feacher3(self):
            print("In Feacher-3")
        def feacher4(self):
            print("In Feacher-4")

class C(B):
        def feacher5(self):
            print("In Feacher-5")
        
c1 = C()
c1.feacher1()
c1.feacher2()
c1.feacher3()
c1.feacher4()
