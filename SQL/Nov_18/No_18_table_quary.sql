Question 1] ***************************

1]
Select * from EMP_Nov_18 order by Salary;

2]
Select Dept_no,count(*) from EPM_Nov_18 group by Dept_no;

3]
Select Name from Emp_Nov_18 where Salary <= 20000;

4]
Select Name from EMP_Nov_18 where Name like '_s%';

5]
Select Name from EMP_Nov_18 where Job = 'Manager';


Question 2] *****************************************

1]
Select Cust_Name from Customer_Nov_18 where Cust_Name like '____';

2]
Select * from Customer_Nov_18 where Mobile_no like '91%';

3]
Select * from Customer_Nov_18 where City = 'Mumbai';

4]
Select max(Price) from Product_Nov_18;

5]
Select * from Customer_Nov_18 where To_Char(date_of_purchase,'DD-MON') = '10-OCT';



Question 3] *******************************************

1]
Select Name from EMP_Nov_18 where Name like 'A%' OR Name Like 'M%';

2]
Select * from Emp_Nov_18 where To_Char(Join_date,'MON') = 'JUN';

3]
Select Name,City,Job from EMP_Nov_18 where Commission IS NOT NULL;

4]
Select Dept_no,count(*) from EMP_Nov_18 group by Dept_no;

5]
Select * from EMP_Nov_18 where City='Pune';



Question 4] ******************************************

1]
Select To_Char(Join_Date,'Mon') from EMP_Nov_18;

2]
Select * from EMP_Nov_18 order by Name;

3]
Select * from EMP_Nov_18 where Job = 'Clerk' AND Salary < 15000;

4]
Select * from EMP_Nov_18 where Salary = (Select max(Salary) from EMP_Nov_18);

5]
Select * from EMP_Nov_18 where Commission IS NULL;


Question 5]

1]
Select * from Product_Nov_18 where Price > 30000;

*****2]
Select Cust_id,Cust_name,City from Customer_Nov_18 prod_id = (Select prod_id,(count(prod_id)>1) from Customer_Nov_18;

3]
Select * from EMP_Nov_18 where City = 'Nagpur';

4]
Select count(Prod_id) from Product_Nov_18;

*****5]
Alter table EMP_Nov_18 Add(Warranty number(2) CHECK(Warranty <=1 And Warranty >=10));



Question 6]


Create table Course_Nov_18(
Dept_id number(5) Primary key,
Course_Name varchar2(15),
max_stud_limit number(2),
Course_fee number(7,2));

Insert into Course_Nov_18 values(101,'BBA',60,25000);
Insert into Course_Nov_18 values(102,'BCA',80,23000);
Insert into Course_Nov_18 values(103,'LAW',40,20000);
Insert into Course_Nov_18 values(104,'HM',25,60000);
Insert into Course_Nov_18 values(105,'MCA',20,45000);

Select * from Course_Nov_18 order by Dept_id;

create table Student_Nov_18(
RollNo Number(4),
First_Name varchar2(20),
Last_Name varchar2(20),
birth_date date,
Dept_id number(5) references Course_Nov_18,
City varchar2(20));

Insert into Student_Nov_18 values(1,'Raju','Chavan','02-May-99',101,'Pune');
Insert into Student_Nov_18 values(2,'Akhil','Gupta','02-Oct-99',102,'Delhi');
Insert into Student_Nov_18 values(3,'Dinesh','Sharma','07-Jun-99',101,'Mumbai');
Insert into Student_Nov_18 values(4,'Sameer','Dhavan','17-Dec-97',105,'Delhi');
Insert into Student_Nov_18 values(5,'Mayur','Chaudhari','12-May-98',104,'Mumbai');

Select * from Student_Nov_18 order by Dept_id;

1]
select Birth_date from Student_Nov_18;

2]
Select First_Name,length(First_Name) from Student_Nov_18;

3]
Select * from Student_Nov_18 s ,Course_Nov_18 c where s.Dept_id = c.Dept_id AND c.Max_Stud_limit < 30;

4]
Select Course_Name from Course_Nov_18;

5]
Alter table Student_Nov_18 Modify(Rollno number(5) CHECK(Rollno <= 1 AND Rollno >= 999));