from math import *

no = int(input("Enter a Number : "))
temp = no
s = 0
r = 0

while no > 0:
    r = no % 10
    s = (s) + (r*r*r)
    no = floor(no / 10)
if s == temp:
    print(temp," is Armstrong")
else:
    print(temp," is Not Armstrong")
