num = int(input("Enter a Number : "))
for i in range(2,int(num/2)):
    if num % i == 0:
        print(num, " is Not prime")
        break
else:
    print(num," is prime")