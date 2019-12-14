class Student:
    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2

    def __str__(self):
        #return self.m1,self.m2
        return '{} {}'.format(self.m1,self.m2)
    

s1 = Student(5,21)
s2 = Student(3,5)
print(s1.__str__())
print(s2)
