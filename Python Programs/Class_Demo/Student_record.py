from array import *

class Student:
    percent = 0

    def getdata(self):
        self.name = input("Enter Student Name : ")
        self.roll = input("Enter Student Roll No : ")
        self.m1 = int(input("Enter Student Marks for Physics : "))
        self.m2 = int(input("Enter Student Marks for Chemisty : "))
        self.m3 = int(input("Enter Student Marks for Mathematics : "))
        Student.percent = (self.m1+self.m2+self.m3)/3

    def showdata(self):
        print("\nStudent Name is : ",self.name)
        print("Student Roll No is : ",self.roll)
        print("Student Percentage is : ",Student.percent)

data = []
s = []
n = 3
for e in range(n):
    data[e] = Student()
    data[e].getdata()
    s.append(data[e])

for e in range(n):
    s[e].showdata()