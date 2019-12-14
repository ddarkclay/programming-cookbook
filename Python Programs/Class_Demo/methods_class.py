class Student:
    school = 'TMV'
    def __init__(self,m1,m2,m3):
        self.m1 = m1;
        self.m2 = m2
        self.m3 = m3

    def avg(self):              #instace_method
        return(self.m1+self.m2+self.m3)/3

    @classmethod                #class_method
    def getSchool(cls):
        return cls.school

    @staticmethod
    
    def info():
        print("This is Static Class in XYZ Module")
    
s1 = Student(32,45,64)
s2 = Student(54,75,23)

print(s1.avg())
print(s2.avg())
print(Student.getSchool())
Student.info()
