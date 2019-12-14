class PyCharm:
    def execute(self):
        print("Compiling")
        print("Runnning")

class MyEditor:
    def execute(self):
        print("Spell Checker")
        print("Auto Correct")
        print("Compiling")
        print("Runnning")

class Laptop:
    def code(self,ide):
        ide.execute()

print("***PyCharm***")
ide = PyCharm()
lap1 = Laptop()
lap1.code(ide)

print("\n***MyEditor***")
ide = MyEditor()
lap1.code(ide)

