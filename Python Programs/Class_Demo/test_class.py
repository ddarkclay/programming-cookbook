class Computer:
    def config(self):
        print("i3,8GB,1TB")

c1 = Computer()
c2 = Computer()

Computer.config(c1) #method I to call method
c2.config()         #method II vto call method
