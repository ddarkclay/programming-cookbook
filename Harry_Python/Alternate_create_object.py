#Using this method we can create object of the class without using constuctor using class method
class Employee:
    no_of_leaves = 8

    def __init__(self,name,sal):
        self.name = name
        self.sal = sal

    def printdata(self):
        return f"Name is : {self.name} and Salary is : {self.sal}"

    @classmethod
    def from_str(cls,str):
        param = str.split("-")
        print(param)
        return cls(param[0],param[1])


raj = Employee.from_str("Raj-9000")
print(raj.sal)