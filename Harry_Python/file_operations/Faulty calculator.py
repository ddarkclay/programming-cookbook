n1 = int(input("Enter First Number : "))
n2 = int(input("Enter Second Number : "))
op = input("Enter a Opertor : ")
if op == '+':
    print("Addition is : "+str(n1+n2)*5)
elif op == '-':
    print("Subtraction is : "+str((n1 - n2) * 5))
elif op == '*':
    print("Multiplication is : "+str((n1 * n2) * 5))
elif op == '/':
    print("Division is : "+str((n1 / n2) * 5))
else:
    print("Invalid Operator")