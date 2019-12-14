no = int(input("Enter a Number : "))
rev = 0
r = 0

while no > 0:
    r = no % 10
    rev = (rev * 10) + r
    no = int(no / 10)
print("Reverse Number is : ",rev)
