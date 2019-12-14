arr = []
n = int(input("Enter No. of Elements : "))
for i in range(1,n+1):
    elements = input("Enter Elements of Lists : ")
    arr.append(elements)
print(arr)

c = []
count = 0
b = input("Enter word to remove : ")
n = int(input("Enter the Occcurance to remove :"))
for i in arr:
    if(i==b):
        count=count+1
        if(count!=n):
            c.append(i)
        else:
            c.append(i)
if(count==0):
    print("Item Not Found")
else:
    print("The Number of Repetitions is : ",count)
    print("Updated List is : ",c)
    print("The Distinct elements are : ",set(arr))
