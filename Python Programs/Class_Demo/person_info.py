class Person:
    def __init__(self,name,age):
        print("In init")
        self.name = name
        self.age = age
        
    def info(self):
        print("Name is : ",
              self.name)
        print("Age is : ",self.age)

p1 = Person("Ajay",30)
p2 = Person("Vijay",36)

p1.info()
p2.info()
