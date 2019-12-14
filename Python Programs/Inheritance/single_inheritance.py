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

b1 = B()
b1.feacher1()
b1.feacher2()
b1.feacher3()
b1.feacher4()
