class A:
    classvar  = "I am in class Variable in class A"

    def __init__(self):
        self.var = "I am inside A's Constructor"
        self.classvar = "Inside var in class A"
        self.special = "Special"


class B(A):
    classvar = "I am in class A"

    def __init__(self):
        self.var = "I am inside B's Constructor"
        self.classvar = "Inside var in class B"
        super().__init__()


test = B()
print(test.var)
