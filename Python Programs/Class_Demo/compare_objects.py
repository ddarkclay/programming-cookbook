class Person:
    def __init__(self):
        self.name = "San"
        self.age = 30

    def compare(self,other):
        if self.age == other.age:
            return True
        else:
            return False

c1 = Person()
c1.age = 35
c2 = Person()
if c1.compare(c2):
    print("They are Same .")
else:
    print("They are Not Same .")

print(c1.name)
print(c2.name)
