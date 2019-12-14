class Employee:
    no_of_leaves = 8

    def __init__(self,name,sal):
        self.name = name
        self.sal = sal

    def printdata(self):
        return f"Name is : {self.name} and Salary is : {self.sal}"

    @classmethod
    def change_leave(cls):
        cls.no_of_leaves = 9


raj = Employee("Raj",5000)
navin = Employee("Navin",7000)
raj.change_leave()
print(Employee.no_of_leaves)
print(raj.printdata())
