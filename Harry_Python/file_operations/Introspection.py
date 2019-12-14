import inspect

class Something:
    def __init__(self,str):
        self.str = str

    def printdata(self):
        print("Name is : ",self.str)


test = Something("San")
test.printdata()

print(type("Hello"))
print(id("Hello"))
print(id("Hello"))
print(dir("Hello"))
# print(inspect.getmembers("Hello"))
print(inspect.getmembers(test))