class Student:
    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2

    def __gt__(self,other):
        r1 = self.m1 + self.m2
        r2 = other.m2 + other.m2
        if r1 > r2:
            return True
        else:
            return False
    

s1 = Student(5,21)
s2 = Student(3,5)
if s1>s2:          #Student.__gt__(s1,s2)
    print("s1 is greater")
else:
    print("s2 is greater")

