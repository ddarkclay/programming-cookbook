class Employee:
    def __init__(self,fname,lname):
        self.fname = fname
        self.lname = lname

    def explain(self):
        return f"Name is : {self.fname} {self.lname}"

    @property
    def email(self):
        if self.fname is None or self.lname is None:
            return "Email Not Set Yet"
        return f"{self.fname}.{self.lname}@code.com"

    @email.setter
    def email(self,string):
        print("Email is Setting Now");
        names = string.split("@")[0]
        self.fname = names.split(".")[0]
        self.lname = names.split(".")[1]

    @email.deleter
    def email(self):
        self.fname = None
        self.lname = None

raj = Employee("raj","jadeja")
print(raj.explain())
print(raj.email)
raj.fname = "sairaj"
print(raj.email)
raj.email = "this.that@code.com"
print(raj.email)
del raj.email
print(raj.email)