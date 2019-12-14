class Employee:
    def __init__(self,name,sal):
        self.name = name
        self.sal = sal

    def __add__(self, other):
        return self.sal + other.sal

    def __truediv__(self, other):
        return self.sal / other.sal

    def __str__(self):
        return f"Name is : {self.name}"

    def __repr__(self):
        return f"Name is : {self.name} and Salary is : {self.sal}"

    def __pow__(self, other):
        return self.sal.__pow__(other.sal)

    def __mod__(self, other):
        return self.sal % other.sal

    def __neg__(self):
        return -self.sal

    def __le__(self, other):
        return self.sal <= other.sal


emp1 = Employee("Raj",1)
emp2 = Employee("Sairaj",3)
print(emp1+emp2)
print(emp1/emp2)
print(emp1) # default call __str__() method
print(repr(emp1)) # explicit call to run __repr__() method
print(emp1 ** emp2) # Expontiation
print(emp1 % emp2)
print(-emp1)
print(emp1 <= emp2)