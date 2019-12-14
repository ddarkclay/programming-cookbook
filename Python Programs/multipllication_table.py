print("*** Multiplication Table ***")
n1 = int(input("Enter Starting Number : "))
n2 = int(input("Enter Ending Number : "))
for i in range(1,11):
    for j in range(n1,n2+1):
        print(i*j,end="\t")
    print()
