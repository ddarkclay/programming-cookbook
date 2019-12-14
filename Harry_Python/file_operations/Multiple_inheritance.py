class Person:
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def printdata(self):
        print(f"Name is : {self.name} and Age is : {self.age}")

class Player:
    plays = ""
    def __init__(self,plays):
        self.plays = plays

    def printplays(self):
        print(f"Player Plays : {self.plays}")

class Employee(Person,Player):
    def printdata(self):
        print(f"Name is : {self.name} and Age is : {self.age} and Player Plays {self.plays}")


raj = Employee("Raj",23)
print(Employee.plays)
raj.printdata()