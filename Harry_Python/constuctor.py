class Something:
    def __init__(self,str):
        self.str = str

    def printdata(self):
        print("Name is : ",self.str)


test = Something("San")
test.printdata()