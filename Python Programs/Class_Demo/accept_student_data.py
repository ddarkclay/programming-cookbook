n = 5

students=[]
for num in range(n):
    x=input("Enter name of students: ")
    students.append(x)

marks=[]
for num in range(n):
    y=input("Enter marks of students:")
    marks.append(y)

report = input("Do you want to print class report?: ")
if report == 'yes':
    for i,j in zip(students, marks):
        print(i,':', j)