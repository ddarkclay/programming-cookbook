class Person:
    def printpersondata(self,name,age):
        self.name = name
        self.age = age
        print(f"Name is : {self.name} and Age is : {self.age}")

class Player(Person):
    def printplays(self,plays):
        self.plays = plays
        print(f"Player Plays : {self.plays}")

class Employee(Player):
    def printdata(self):
        print(f"Name is : {self.name} and Age is : {self.age} and Player Plays {self.plays}")


raj = Employee()
raj.printpersondata("Raj",19)
raj.printplays("Cricket")
raj.printdata()

# Example like electronic device -> poketdevice -> Mobile phone