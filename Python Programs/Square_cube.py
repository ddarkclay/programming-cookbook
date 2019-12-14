class Square_Cube:
    
    def __init__(self,num):
        self.num = num

    def result(self):
        print("The Square of ",self.num," is : ",self.num**2)
        print("The Square of ",self.num," is : ",self.num**3)

s1 = Square_Cube(8)
s1.result()
