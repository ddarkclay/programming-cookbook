n = int(input("Enter Number of Rows : "))
c = int(input("Enter 1 or 0 : "))
new = bool(c)
if new is True:
    for i in range(0,n+1):
        for j in range(0,i):
            print("*",end="")
        print()
elif new is False:
    for i in range(n,0,-1):
            for j in range(0,i):
                print("*",end="")
            print()