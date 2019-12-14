class Person:
    def __init__(self,name,age,sal):
        self.name = name
        self.age = age
        self.sal = sal

    def printdata(self):
        print(f"Name is : {self.name} and Age is : {self.age}")


class Employee(Person):
    def printdata(self):
        print(f"Name is : {self.name} and Age is : {self.age} and Salary is {self.sal}")


raj = Employee("Raj",24,13000)
print(raj.name)
raj.printdata()
# raj.printsal()