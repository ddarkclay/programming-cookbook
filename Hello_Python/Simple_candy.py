num = int(input("Enter a Total No. of Candy you have ? : "))
av = 5
for i in range(1,num+1):
    if i>av:
        print("Out of Stock")
        break
    print("Candy")
print("Bye")