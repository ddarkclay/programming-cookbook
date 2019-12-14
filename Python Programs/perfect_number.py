no = int(input("Enter a Number : "))
temp = no
s = 0
for i in range(1,no):
    if no % i == 0:
        print(i)
        s = s + i
if s == temp:
    print(temp,"is Perfect Number")
else:
    print(temp,"is Not Perfect Number")
    
