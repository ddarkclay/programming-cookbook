class Student:
    def __init__(self,name,roll):
        self.name = name
        self.roll = roll
        self.lap = self.Laptop()

    def show(self):
        print(self.name , self.roll)
        self.lap.show()

    class Laptop:
        def __init__(self):
            self.brand = "Acer"
            self.cpu = "i5"
            self.ram = 8

        def show(self):
            print(self.brand,self.cpu,self.ram)
    

s1 = Student('Ajay',2)
s2 = Student('Vijay',5)
s1.show()
s2.show()

#lap = Student.Laptop()
