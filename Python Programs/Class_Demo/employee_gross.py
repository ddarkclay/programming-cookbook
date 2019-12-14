class Employee:

    def __init__(self,name,eno,bsal):
        self.name = name
        self.eno = eno
        self.bsal = bsal

    def calculate(self):
        da = (25*self.bsal)/100
        hra = da
        Employee.gross_sal = self.bsal+da+hra
        pf = (10*Employee.gross_sal)/100
        Employee.net_bal = Employee.gross_sal - pf

    def show(self):
        print("Employee Name is : ",self.name)
        print("Employee No is : ",self.eno)
        print("Employee Basic Salary is : ",self.bsal)
        print("Employee Gross Salary is : ", Employee.gross_sal)
        print("Employee Net Salary is : ", Employee.net_bal)


e1 = Employee("Ajit",101,25000)
e2 = Employee("Sanju",102,15000)
e1.calculate()
e1.show()
