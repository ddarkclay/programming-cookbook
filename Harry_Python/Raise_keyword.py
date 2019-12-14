# a = input("Whats your Name : ")
# b = input("What your salary : ")
# if int(b) == 0:
#     raise ZeroDivisionError("Salary should not be 0")
# if a.isnumeric():
#     raise Exception("Number not allowed")
# print(f"Hello {a} your salary is {b}")

name = input("Enter your name : ")
try:
    print("Hello ",a)
except Exception as e:
    if name == "san":
        raise ValueError("San Not Allowed")
    print("Hello ",name,"Exception handle")