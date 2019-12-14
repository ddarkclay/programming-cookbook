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

    @staticmethod
    def printgood(str):
        print("Hello",str)


raj = Employee("raj",4000)
raj.printgood("San")
Employee.printgood("Employee")